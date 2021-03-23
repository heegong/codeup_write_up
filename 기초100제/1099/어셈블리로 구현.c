#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char escape_n[2] = " ";
char dd[4] = "%d";
char d_space[4] = "%d ";


int main()
{
	int array[15][15] = { 0, };
	int i, j;
	int food_x, food_y;
	int x, y;


	__asm {
		mov dword ptr[i], 0;							// int i
		mov dword ptr[j], 0;							// int j
		mov dword ptr[food_x], 0;						// int food_x
		mov dword ptr[food_y], 0;						// int food_y
		mov dword ptr[x], 1;						// int x
		mov dword ptr[y], 1;						// int y
		mov dword ptr[array], 0;						// int array[15][15]
		jmp FOR_1_START;

		
	cmp_i_and_setting:

		mov eax, dword ptr[i];
		inc eax;
		mov dword ptr[i], eax;
		cmp dword ptr[i], 0xA;
		jge FOR_1;

	FOR_1_START :

		mov dword ptr[j], 0;
		jmp cmp_j;

	j_for:

		mov eax, dword ptr[j];
		inc eax;
		mov dword ptr[j], eax;

	cmp_j:
		cmp dword ptr[j], 0xA;
		jge FOR_2;

		imul eax, dword ptr[i], 60;						// 60 = 15*4
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		lea eax, [ecx + edx * 4];

		lea edx, dd;

		push eax;
		push edx;					// dd
		call scanf;
		add esp, 8;					//scanf("%d",eax);
		
		imul eax, dword ptr[i], 60;						// 60 = 15*4
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		cmp dword ptr [ecx + edx * 4], 2;
		jne continue__;


		//food_x = j
		mov eax, dword ptr[j];
		mov dword ptr[food_x], eax;

		//food_y = i
		mov eax, dword ptr[i];
		mov dword ptr[food_y], eax;


	continue__:
		jmp j_for;

	FOR_2:
		jmp cmp_i_and_setting;


	FOR_1:


	// while문 시작
	while_start:
		mov eax, 1;
		test eax, eax;
		je eax_1;

		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		mov dword ptr[ecx + edx * 4], 9;
		
		mov eax, dword ptr[food_x];
		cmp eax, dword ptr[x];
		jne location_food;

		mov eax, dword ptr[food_y];
		cmp eax, dword ptr[y];
		jne location_food;

		jmp eax_1;


	location_food:
		mov eax, dword ptr[y];
		inc eax;
		imul ecx, eax, 60;
		lea edx, array[ecx];
		mov eax, dword ptr[x];
		cmp dword ptr[edx + eax * 4], 1;
		jne x_1_y_1;
		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		cmp dword ptr[ecx + edx * 4 + 4], 1;
		jne x_1_y_1;



		jmp eax_1;



	x_1_y_1:
		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		cmp dword ptr[ecx + edx * 4 + 4], 1;
		je plus_y;

		//x++
		mov eax, dword ptr[x];
		inc eax;
		mov dword ptr[x], eax;

		jmp go_while;

	plus_y:
		//y++
		mov eax, dword ptr[y];
		inc eax;
		mov dword ptr[y], eax;


	go_while:
		jmp while_start;

	eax_1:															// for 돌릴때 거기임
		mov dword ptr[i], 0;
		jmp cmp_i_for;

	plus_i:
		mov eax, dword ptr[i];
		inc eax;
		mov dword ptr[i], eax;

	cmp_i_for:
		cmp dword ptr[i], 0xA;
		jge main_return;

		mov dword ptr[j], 0;
		jmp cmp_j_for;

	plus_j:
		mov eax, dword ptr[j];
		inc eax;
		mov dword ptr[j], eax;

	cmp_j_for:
		cmp dword ptr[j], 0xA;
		jge escape_n_puts;

		imul eax, dword ptr[i], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		mov eax, dword ptr[ecx + edx * 4];

		lea edx, d_space;							// "%d "

		push eax;
		push edx;
		call printf;
		add esp, 8;
		jmp plus_j;

	escape_n_puts:
		lea edx, escape_n;
		push edx;
		call puts;
		add esp, 4;
		jmp plus_i;




	main_return:
		xor eax, eax;						// return 0
		// 종료 지점
	}

}

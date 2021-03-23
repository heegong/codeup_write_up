#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char escape_n[2] = "\n";
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
		mov dword ptr[x], 1;							// int x
		mov dword ptr[y], 1;							// int y
		mov dword ptr[array], 0;						// int array[15][15]
		jmp FOR_1_START;

		
	main_57:

		mov eax, dword ptr[i];
		inc eax;
		mov dword ptr[i], eax;
		cmp dword ptr[i], 0xA;
		jge FOR_1;

	FOR_1_START :

		mov dword ptr[j], 0;
		jmp main_E8;

	main_6F:

		mov eax, dword ptr[j];
		inc eax;
		mov dword ptr[j], eax;

	main_E8:
		cmp dword ptr[j], 0xA;
		jge FOR_2;

		imul eax, dword ptr[i], 60;						// 60 = 15*4
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		lea eax, [ecx + edx * 4];

		lea edx, dd;

		push eax;
		push edx;								// dd
		call scanf;
		add esp, 8;								//scanf("%d",eax);
		
		imul eax, dword ptr[i], 60;						// 60 = 15*4
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		cmp dword ptr [ecx + edx * 4], 2;
		jne main_CB;


		//food_x = j
		mov byte ptr[and_1], 1;
		mov eax, dword ptr[j];
		mov dword ptr[food_x], eax;

		//food_y = i
		mov byte ptr[and_2], 1;
		mov eax, dword ptr[i];
		mov dword ptr[food_y], eax;


	main_CB:
		jmp main_6F;

	FOR_2:
		jmp main_57;


	FOR_1:


	// while문 시작
	main_CF:
		mov eax, 1;
		test eax, eax;
		je main_18D;

		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		mov dword ptr[ecx + edx * 4], 9;
		
		mov eax, dword ptr[food_x];
		cmp eax, dword ptr[x];
		jne main_12F;

		mov eax, dword ptr[food_y];
		cmp eax, dword ptr[y];
		jne main_12F;

		jmp main_18D;


	main_12F:
		mov eax, dword ptr[y];
		inc eax;
		imul ecx, eax, 60;
		lea edx, array[ecx];
		mov eax, dword ptr[x];
		cmp dword ptr[edx + eax * 4], 1;
		jne main_15F;
		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		cmp dword ptr[ecx + edx * 4 + 4], 1;
		jne main_15F;



		jmp main_18D;



	main_15F:
		imul eax, dword ptr[y], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[x];
		cmp dword ptr[ecx + edx * 4 + 4], 1;
		je main_17F;

		//x++
		mov eax, dword ptr[x];
		inc eax;
		mov dword ptr[x], eax;

		jmp main_188;

	main_17F:
		//y++
		mov eax, dword ptr[y];
		inc eax;
		mov dword ptr[y], eax;


	main_188:
		jmp main_CF;

	main_18D:															// for 돌릴때 거기임
		mov dword ptr[i], 0;
		jmp main_19F;

	main_196:
		mov eax, dword ptr[i];
		inc eax;
		mov dword ptr[i], eax;

	main_19F:
		cmp dword ptr[i], 0xA;
		jge main_1ED;

		mov dword ptr[j], 0;
		jmp main_1B7;

	main_1AE:
		mov eax, dword ptr[j];
		inc eax;
		mov dword ptr[j], eax;

	main_1B7:
		cmp dword ptr[j], 0xA;
		jge main_1DE;

		imul eax, dword ptr[i], 60;
		lea ecx, array[eax];
		mov edx, dword ptr[j];
		mov eax, dword ptr[ecx + edx * 4];

		lea edx, d_space;							// "%d "

		push eax;
		push edx;
		call printf;
		add esp, 8;
		jmp main_1AE;

	main_1DE:
		lea edx, escape_n;
		push edx;
		call printf;
		add esp, 4;
		jmp main_196;




	main_1ED:
		xor eax, eax;						// return 0
		// 종료 지점
	}

}

//-------------------------------   
//CP11 NO1 �����ăQ�[��
//AT-51A-715 Name ���C�~��
//2017-10-17 �Ηj��
//-------------------------------
//�w�b�_�[
#include <stdio.h>
#include <time.h>//time()
#include <stdlib.h>//rand() srand()
//main �֐�
int main()
{
	int loop = 0;//���[�v
	int ans;//����
	int ransu;//����
	char alpha;//���͂��鎞�����𔻒f����ꍇ�g���ϐ�
   
   printf("-------------------------------\n");
   printf("�������ăQ�[��\n");
   printf("--------------------------------\n");
   printf("�����𓖂ĂĂ�������\n");
	//�Q�[���僋�[�v�@while��
   while (1)
   {
	   srand((unsigned)time(NULL));//seed�ݒ�A�����������֐�
	   ransu = rand() % 10;//�����͈̔͂��P����P�O�܂Őݒ�A������10�Ŋ������]��
	   while (loop < 3)//�J�n�C�ő�O��܂œ��Ă�
	         {
		     
		     rewind(stdin);//���͗̈�̃N���A
		     scanf_s("%d", &ans);//ans�i�����j��������͂��܂��B
			      while (ans < 1 || ans > 10 || getchar() != '\n')//�P����P�O�܂ł̐������������͂ł��āA getchar() != '\n'�͕s�@���͂������܂��B
			    {   
				 printf("�P����P�O�܂ł̐�������͂��Ă��������I\n");
				 rewind(stdin);//���͗̈�̃N���A
				 scanf_s("%d", &ans);//ans�i�����j��������͂��܂��B

			    }
			        if (ans == ransu)//�������Ă���Abreak�ł��̃��[�v���I�����āA�V�����Q�[�������邩�ǂ�����Ŋm�F���܂�
			       {
				   printf("bingo\n");
				   break;
			       }
		           if (ans < ransu)//�����͗�����菬����
		        {
			      printf("������\n");
		        }
		         if (ans > ransu)//�����͗������傫��
		        {
			   printf("�傫��\n");
		        }
		   loop ++;//���̃��[�v�̂��߁A�P���v���X���܂��B
	      }
	   if (loop == 3)//�O�񐔎����𓖂Ă܂���
	     {
		   printf("�c�O\n");//�O����O�ꂽ��A����̃Q�[�����I�����܂�
	     }
	    printf("game finished.\n");
		printf("continue?\nINPUT:Y/N\n");//�V�����Q�[�������邩�ǂ����m�F���܂�
	    rewind(stdin);//���͗̈�̃N���A
		alpha = getchar();//�x���邢�͂m����͂��܂�;
		switch (alpha)//N�Ƃx�������͂��邱�Ƃ��\�ł�
		{
		case 'Y': break;//�x����͂���ꍇ�Aswitch���痣��܂�
		case 'N': break;//�m����͂���ꍇ�Aswitch���痣��܂�
		default://N�Ƃx�̒��̈�𐳂������͂���̊֐�
			do {
				printf("��������������͂��Ă��������I\n");
				rewind(stdin);//���͗̈�̃N���A
				alpha = getchar();//�x���邢�͂m����͂��܂�;
			   }
				   while ( alpha != 'N' && alpha != 'Y');//N�Ƃx�̒��̈����͂���ƁA���[�v�𗣂�܂�
		}
	   if (alpha == 'N')//	�m����͂���ꍇ�́A����break�Ńv���O�������I�����܂�
	        {
		     break;
	        }
	   printf("new game start!\n");
	   loop = 0;//�V�����Q�[���̂��߂ɁA���[�v���O�ɂ��܂��B
   }
   return 0;
}
//-------------------------------   
//CP11 NO1 数当てゲーム
//AT-51A-715 Name 劉イミン
//2017-10-17 火曜日
//-------------------------------
//ヘッダー
#include <stdio.h>
#include <time.h>//time()
#include <stdlib.h>//rand() srand()
//main 関数
int main()
{
	int loop = 0;//ループ
	int ans;//答え
	int ransu;//乱数
	char alpha;//入力する時条件を判断する場合使う変数
   
   printf("-------------------------------\n");
   printf("数字当てゲーム\n");
   printf("--------------------------------\n");
   printf("数字を当ててください\n");
	//ゲーム主ループ　while文
   while (1)
   {
	   srand((unsigned)time(NULL));//seed設定、乱数初期化関数
	   ransu = rand() % 10;//乱数の範囲を１から１０まで設定、乱数を10で割った余り
	   while (loop < 3)//開始，最大三回まで当てる
	         {
		     
		     rewind(stdin);//入力領域のクリア
		     scanf_s("%d", &ans);//ans（答え）数字を入力します。
			      while (ans < 1 || ans > 10 || getchar() != '\n')//１から１０までの数字だけが入力できて、 getchar() != '\n'は不法入力を除きます。
			    {   
				 printf("１から１０までの数字を入力してください！\n");
				 rewind(stdin);//入力領域のクリア
				 scanf_s("%d", &ans);//ans（答え）数字を入力します。

			    }
			        if (ans == ransu)//もし当てたら、breakでこのループを終了して、新しいゲームをするかどうか後で確認します
			       {
				   printf("bingo\n");
				   break;
			       }
		           if (ans < ransu)//答えは乱数より小さい
		        {
			      printf("小さい\n");
		        }
		         if (ans > ransu)//答えは乱数より大きい
		        {
			   printf("大きい\n");
		        }
		   loop ++;//次のループのため、１をプラスします。
	      }
	   if (loop == 3)//三回数字をを当てました
	     {
		   printf("残念\n");//三回も外れたら、今回のゲームを終了します
	     }
	    printf("game finished.\n");
		printf("continue?\nINPUT:Y/N\n");//新しいゲームをするかどうか確認します
	    rewind(stdin);//入力領域のクリア
		alpha = getchar();//ＹあるいはＮを入力します;
		switch (alpha)//NとＹだけ入力することが可能です
		{
		case 'Y': break;//Ｙを入力する場合、switchから離れます
		case 'N': break;//Ｎを入力する場合、switchから離れます
		default://NとＹの中の一つを正しく入力するの関数
			do {
				printf("正しい文字を入力してください！\n");
				rewind(stdin);//入力領域のクリア
				alpha = getchar();//ＹあるいはＮを入力します;
			   }
				   while ( alpha != 'N' && alpha != 'Y');//NとＹの中の一つを入力すると、ループを離れます
		}
	   if (alpha == 'N')//	Ｎを入力する場合は、下のbreakでプログラムを終了します
	        {
		     break;
	        }
	   printf("new game start!\n");
	   loop = 0;//新しいゲームのために、ループを０にします。
   }
   return 0;
}
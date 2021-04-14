#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab/Container.h"
#include "../Lab/In_Container.cpp"
#include "../Lab/Animal.h"
#include "../Lab/In_Animal.cpp"
#include "../Lab/Fish.h"
#include "../Lab/Bird.h"
#include "../Lab/Beast.h"
#include "../Lab/Fish_In_Data.cpp"
#include "../Lab/Fish_Out_Data.cpp"
#include "../Lab/Bird_In_Data.cpp"
#include "../Lab/Bird_Out_Data.cpp"
#include "../Lab/Beast_In_Data.cpp"
#include "../Lab/Beast_Out_Data.cpp"
#include "../Lab/Node.h"
#include "../Lab/Clear_Container.cpp"
#include "../Lab/Compare.cpp"
#include "../Lab/Init_Container.cpp"
#include "../Lab/Out_Container.cpp"
#include "../Lab/Out_Only_Fish_Container.cpp"
#include "../Lab/Out_Only_Fish.cpp"
#include "../Lab/Out_Only_Fish_Animal.cpp"
#include "../Lab/Sort.cpp"
#include "../Lab/Amount_Fish.cpp"
#include "../Lab/Amount_Bird.cpp"
#include "../Lab/Amount_Beast.cpp"

#include "../Lab/Set_Cont.cpp"
#include "../Lab/Get_Cont.cpp"
#include "../Lab/Set_Fish.cpp"
#include "../Lab/Get_Fish.cpp"
#include "../Lab/Set_Bird.cpp"
#include "../Lab/Get_Bird.cpp"
#include "../Lab/Set_Beast.cpp"
#include "../Lab/Get_Beast.cpp"

#include <fstream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(In_Fish_Test)
		{

			enum  Habitat {
				RIVER,
				SEA,
				OCEAN
			};

			Fish* F_exp = new Fish;

			F_exp->Set_Name("Fish1");
			F_exp->Set_H((int)OCEAN);
			F_exp->Set_Age(13);

			struct Local_Cont
			{
				Node* Head;
				int Len;
			};

			Local_Cont* L_C = new Local_Cont;

			L_C->Head = new Node;
			L_C->Head->Cont = (Animal*)F_exp;
			L_C->Head->Next = L_C->Head;
			L_C->Len = 1;

			Container Cont_Exp;

			Cont_Exp.Set_Head(L_C->Head);
			Cont_Exp.Set_Len(L_C->Len);

			ifstream ifst("../Lab/in_fish.txt");

			Container Cont_Act;

			Cont_Act.In(ifst);

			Fish* F_act = (Fish*)Cont_Act.Get_Head()->Cont;

			Assert::AreEqual(Cont_Exp.Get_Len(), Cont_Act.Get_Len());

			Assert::AreEqual(F_exp->Get_Name(), F_act->Get_Name());
			Assert::AreEqual((int)F_exp->Get_H(), (int)F_act->Get_H());
			Assert::AreEqual(F_exp->Get_Age(), F_act->Get_Age());
		}
		TEST_METHOD(Out_Bird_Text)
		{
			Bird* B_act = new Bird;

			B_act->Set_Name("Bird1");
			B_act->Set_Migration(true);
			B_act->Set_Age(7);

			struct Local_Cont
			{
				Node* Head;
				int Len;
			};

			Local_Cont* L_C = new Local_Cont;

			L_C->Head = new Node;
			L_C->Head->Cont = (Animal*)B_act;
			L_C->Head->Next = L_C->Head;
			L_C->Len = 1;

			Container Cont_Act;

			Cont_Act.Set_Head(L_C->Head);
			Cont_Act.Set_Len(L_C->Len);

			ofstream ofst("../Lab/out_bird_act.txt");

			Cont_Act.Out(ofst);

			ifstream ifst_exp("../Lab/out_bird_exp.txt");
			ifstream ifst_act("../Lab/out_bird_act.txt");

			string Exp;
			getline(ifst_exp, Exp, '\0');
			string Act;
			getline(ifst_act, Act, '\0');

			Assert::AreEqual(Exp, Act);
		}
		TEST_METHOD(Amount_Test)
		{
			Beast* B = new Beast;

			B->Set_Name("Beast1");

			struct Local_Cont
			{
				Node* Head;
			};

			Local_Cont* L_C = new Local_Cont;

			L_C->Head = new Node();
			L_C->Head->Cont = (Animal*)B;

			int Amount_exp = 6;
			int Amount_act = L_C->Head->Cont->Amount();
			Assert::AreEqual(Amount_exp, Amount_act);
		}
		TEST_METHOD(Compare_Test)
		{
			Beast* B = new Beast;

			B->Set_Name("Beast1");

			Fish* F = new Fish;

			F->Set_Name("Fish1");

			struct Local_Cont
			{
				Node* Head;
			};

			Local_Cont* L_C_First = new Local_Cont;

			L_C_First->Head = new Node();
			L_C_First->Head->Cont = (Animal*)B;

			Local_Cont* L_C_Second = new Local_Cont;

			L_C_Second->Head = new Node();
			L_C_Second->Head->Cont = (Animal*)F;

			bool Act = L_C_First->Head->Cont->Compare(L_C_Second->Head->Cont);
			bool Exp = true;

			Assert::AreEqual(Exp, Act);
		}
		TEST_METHOD(Sort_Test)
		{
			ifstream ifst("../Lab/input.txt");
			Container c;

			c.In(ifst);

			ofstream ofst("../Lab/sort_act.txt");

			c.Sort();

			c.Out(ofst);

			ifstream ifst_exp("../Lab/sort_exp.txt");
			ifstream ifst_act("../Lab/sort_act.txt");

			string Exp;
			getline(ifst_exp, Exp, '\0');
			string Act;
			getline(ifst_act, Act, '\0');

			Assert::AreEqual(Exp, Act);
		}
	};
}

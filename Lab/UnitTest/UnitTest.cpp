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

			Animal* An_act = new Fish;

			ifstream ifst("../Lab/in_fish.txt");

			An_act->In_Data(ifst);

			Assert::AreEqual(F_exp->Get_Name(), ((Fish*)An_act)->Get_Name());
			Assert::AreEqual((int)F_exp->Get_H(), (int)((Fish*)An_act)->Get_H());
			Assert::AreEqual(F_exp->Get_Age(), ((Fish*)An_act)->Get_Age());
		}
		TEST_METHOD(In_Bird_Test)
		{

			enum  Habitat {
				RIVER,
				SEA,
				OCEAN
			};

			Bird* B_exp = new Bird;

			B_exp->Set_Name("Bird13");
			B_exp->Set_Migration(true);
			B_exp->Set_Age(4);

			Animal* An_act = new Bird;

			ifstream ifst("../Lab/in_bird.txt");

			An_act->In_Data(ifst);

			Assert::AreEqual(B_exp->Get_Name(), ((Bird*)An_act)->Get_Name());
			Assert::AreEqual((int)B_exp->Get_Migration(), (int)((Bird*)An_act)->Get_Migration());
			Assert::AreEqual(B_exp->Get_Age(), ((Bird*)An_act)->Get_Age());
		}
		TEST_METHOD(In_Beast_Test)
		{

			enum  Habitat {
				RIVER,
				SEA,
				OCEAN
			};

			Beast* B_exp = new Beast;

			B_exp->Set_Name("Beast1");
			B_exp->Set_B_T(2);
			B_exp->Set_Age(18);

			Animal* An_act = new Beast;

			ifstream ifst("../Lab/in_beast.txt");

			An_act->In_Data(ifst);

			Assert::AreEqual(B_exp->Get_Name(), ((Beast*)An_act)->Get_Name());
			Assert::AreEqual((int)B_exp->Get_B_T(), (int)((Beast*)An_act)->Get_B_T());
			Assert::AreEqual(B_exp->Get_Age(), ((Beast*)An_act)->Get_Age());
		}
		TEST_METHOD(Out_Fish_Test)
		{
			Fish* F_act = new Fish;

			F_act->Set_Name("Fish7");
			F_act->Set_H(0);
			F_act->Set_Age(11);

			Animal* An_act = new Fish;
			An_act = F_act;

			ofstream ofst("../Lab/out_fish_act.txt");

			An_act->Out_Data(ofst);

			ifstream ifst_exp("../Lab/out_fish_exp.txt");
			ifstream ifst_act("../Lab/out_fish_act.txt");

			string Exp;
			getline(ifst_exp, Exp, '\0');
			string Act;
			getline(ifst_act, Act, '\0');

			Assert::AreEqual(Exp, Act);
		}
		TEST_METHOD(Out_Bird_Test)
		{
			Bird* B_act = new Bird;

			B_act->Set_Name("Bird1");
			B_act->Set_Migration(true);
			B_act->Set_Age(7);

			Animal* An_act = new Bird;
			An_act = B_act;

			ofstream ofst("../Lab/out_bird_act.txt");

			An_act->Out_Data(ofst);

			ifstream ifst_exp("../Lab/out_bird_exp.txt");
			ifstream ifst_act("../Lab/out_bird_act.txt");

			string Exp;
			getline(ifst_exp, Exp, '\0');
			string Act;
			getline(ifst_act, Act, '\0');

			Assert::AreEqual(Exp, Act);
		}
		TEST_METHOD(Out_Beast_Test)
		{
			Beast* B_act = new Beast;

			B_act->Set_Name("Beast89");
			B_act->Set_B_T(0);
			B_act->Set_Age(23);

			Animal* An_act = new Beast;
			An_act = B_act;

			ofstream ofst("../Lab/out_beast_act.txt");

			An_act->Out_Data(ofst);

			ifstream ifst_exp("../Lab/out_beast_exp.txt");
			ifstream ifst_act("../Lab/out_beast_act.txt");

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

			Animal* An = new Beast;
			An = B;

			int Amount_exp = 6;
			int Amount_act = An->Amount();

			Assert::AreEqual(Amount_exp, Amount_act);
		}
		TEST_METHOD(Compare_Test)
		{
			Beast* B = new Beast;

			B->Set_Name("Beast1");

			Animal* An_First = B;

			Fish* F = new Fish;

			F->Set_Name("Fish1");

			Animal* An_Second = F;

			bool Exp = true;
			bool Act = An_First->Compare(An_Second);

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

#include <iostream>
#include "Status.h"
int main()
{
	int lv;
	Status st; //�N���X�̃C���X�^���X
	std::cout << "���x������́�";
	std::cin >> lv;
	st.SetLv(lv); //���x���l��n��
	st.Calc(); //�e�p�����[�^��ݒ�
	//�e�p�����[�^��\��
	std::cout << " �g�o = " << st.GetHp() << "\n";
	std::cout << "�U����= " << st.GetAtk() << "\n";
	std::cout << "�h���= " << st.GetDef() << "\n";
}

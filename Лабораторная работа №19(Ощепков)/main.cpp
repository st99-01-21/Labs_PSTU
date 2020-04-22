#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
struct BinTree
{
	int value;
	BinTree* left;
	BinTree* right;
};
void newBinTree(int val, BinTree** Tree) {
	if ((*Tree) == NULL)
	{
		(*Tree) = new BinTree;
		(*Tree)->value = val;  //Поместить в выделенное место аргумент
		(*Tree)->left = (*Tree)->right = NULL;
		return;
	}
	if (val > (*Tree)->value) newBinTree(val, &(*Tree)->right);//Если аргумент больше чем текущий элемент, поместить его вправо
	else newBinTree(val, &(*Tree)->left);//Иначе поместить его влево
}
//Для печати дерева
void Print(BinTree** Tree, int l)
{
	int i;

	if (*Tree != NULL)
	{
		Print(&((**Tree).right), l + 1);
		for (i = 1; i <= l; i++) cout << "   ";
		cout << (**Tree).value << endl;
		Print(&((**Tree).left), l + 1);


	}

}
void TreeTraversalAndPrint(BinTree* Root, int& sm)
{
	if (Root != NULL)
	{
		cout << Root->value << endl;
		sm = sm + Root->value;
		TreeTraversalAndPrint(Root->left, sm);
		TreeTraversalAndPrint(Root->right, sm);
	}

}
void TreeTraversalAndPrint2(BinTree* Root) {
	if (Root != NULL) {
		TreeTraversalAndPrint2(Root->left);
		TreeTraversalAndPrint2(Root->right);
		cout << Root->value << endl;
	}
}
void TreeTraversalAndPrint3(BinTree* Root) {
	if (Root != NULL) {
		TreeTraversalAndPrint2(Root->left);
		cout << Root->value << endl;
		TreeTraversalAndPrint2(Root->right);
	}

}
int NumberOfNodes(BinTree* Tree) {
	if (Tree == NULL) return 0;
	return NumberOfNodes(Tree->left) + 1 + NumberOfNodes(Tree->right);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	BinTree* Tree = NULL;
	char variant;
	int val, sm = 0;
	cout << "Создание дерева:" << endl;
	while (_getch() != 27)
	{
		cout << "Введите значение (для завершения ввода элементов нажмите ESC):";
		cin >> val;
		newBinTree(val, &Tree);
	}
	Print(&Tree, 0);

	cout << "Прямой обход дерева:" << endl;
	TreeTraversalAndPrint(Tree, sm);
	cout << "Обратный обход дерева:" << endl;
	TreeTraversalAndPrint2(Tree);
	/*cout << "Cимметричный обход дерева:" << endl;
	TreeTraversalAndPrint3(Tree);*/
	cout << "Сумма всех элементов дерева:" << sm << endl;
	cout << "Количество элементов в дереве:";
	int a = NumberOfNodes(Tree);
	cout << a << endl;
	int s = sm / a;
	cout << "Среднее арифмитическое дерева:" << s;
}
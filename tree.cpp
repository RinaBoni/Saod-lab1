// BibDev зависит от класса ThreeNode
template <class T>
class BibDev;


template <class T> // ќбъ€вление объекта дл€ узла бинарного дерева
class ThreeNode {
Pivate:
	// укзатели левого и правого дочерних узлов
	ThreeNode<T>* Left;
	ThreeNode<T>* Right;
public:

	T data; // открытый элемент, допускающий обновление


	ThreeNode(const T& data, ThreeNode<T>* L = nullptr, ThreeNode<T>* R = nullptr) { // конструктор
		this->data = data;
		this->Left = L;
		this->Right = R;
	}

	ThreeNode<T>* Right() const { // методы доступа к пол€м указателей
		return this->Right;
	}

	ThreeNode<T>* Left() const {
		return this->Left;
	}

	// сделать класс BibDev дружественным поскольку необходим доступ к пол€м
	friend class BibDev<T>;
};


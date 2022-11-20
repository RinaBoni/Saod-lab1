// BibDev ������� �� ������ ThreeNode
template <class T>
class BibDev;


template <class T> // ���������� ������� ��� ���� ��������� ������
class ThreeNode {
Pivate:
	// �������� ������ � ������� �������� �����
	ThreeNode<T>* Left;
	ThreeNode<T>* Right;
public:

	T data; // �������� �������, ����������� ����������


	ThreeNode(const T& data, ThreeNode<T>* L = nullptr, ThreeNode<T>* R = nullptr) { // �����������
		this->data = data;
		this->Left = L;
		this->Right = R;
	}

	ThreeNode<T>* Right() const { // ������ ������� � ����� ����������
		return this->Right;
	}

	ThreeNode<T>* Left() const {
		return this->Left;
	}

	// ������� ����� BibDev ������������� ��������� ��������� ������ � �����
	friend class BibDev<T>;
};


#include <iostream>
using namespace std;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };
struct Mammal {
public:
	Mammal() :itsAge(2), itsWeight(5) {}
	~Mammal() {};
	int GetAge() { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight()const { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }
	void Speak()const { cout << "Mammal sound!\n "; }
	void Sleep()const { cout << "Shhh,I`m sleeping\n "; }
protected:
	int itsAge, itsWeight;

};
struct Dog :public Mammal {
public:
	Dog():itsBreed(GOLDEN) {};
	~Dog() {};
	BREED GetBreed() const { return itsBreed; }
	void WagTail()const { std::cout << "Begging for food...\n"; }
private:
	BREED itsBreed;

};

int main(int argc, char const* argv[]) {
	Dog fido;
	fido.Speak();
	fido.WagTail();
	std::cout << "Fido is "<<fido.GetAge() << " years old\n";
	return 0;
}

#include "../include/Product.hpp"

Product::Product() {
	
	std::cout << std::endl << "  Name: "; std::getchar(); std::string name; 
	std::getline(std::cin, name); this->setName(name);

	std::cout << "  Description: "; std::string description; 
	std::getline(std::cin, description); this->setDescription(description);

	std::cout << "  Brand: "; std::string brand; 
	std::getline(std::cin, brand); this->setBrand(brand);

	std::cout << "  Date: "; std::string date; 
	std::getline(std::cin, date); this->setDate(date);

	std::cout << "  Price (in reais): "; float price; 
	std::cin >> price; std::getchar(); this->setPrice(price);

	std::cout << "  Code: "; std::string code; 
	std::getline(std::cin, code); this->setCode(code);

}

Product::~Product() {

}

void Product::setName(std::string name) {

	Name = name;

}

std::string Product::getName() {

	return Name;

}

void Product::setDescription(std::string description) {

	Description = description;

}

std::string Product::getDescription() {

	return Description;

}

void Product::setBrand(std::string brand) {

	Brand = brand;

}

std::string Product::getBrand() {

	return Brand;

}

void Product::setDate(std::string date) {

	Date = date;

}

std::string Product::getDate() {

	return Date;

}

void Product::setPrice(float price) {

	Price = price;

}

float Product::getPrice() {

	return Price;

}

void Product::setCode(std::string code) {

	Code = code;

}

std::string Product::getCode() {

	return Code;

}

Durable::Durable() {

	std::cout << "  Material: "; std::string material; 
	std::getline(std::cin, material); this->setMaterial(material);

	std::cout << "  Durability (in years, 0 if not defined): "; float durability; 
	std::cin >> durability; std::getchar(); this->setDurability(durability);

}

Durable::~Durable() {

}

void Durable::setMaterial(std::string material) {

	Material = material;

}

std::string Durable::getMaterial() {

	return Material;

}

void Durable::setDurability(float durability) {

	Durability = durability;

}

float Durable::getDurability() {

	return Durability;

}

Nondurable::Nondurable() {

	std::cout << "  Expiration Date: "; std::string expiration_date; 
	std::getline(std::cin, expiration_date); this->setExpiration_Date(expiration_date);

	std::cout << "  Genre: "; std::string genre; 
	std::getline(std::cin, genre); this->setGenre(genre);
	
}

Nondurable::~Nondurable() {

}

void Nondurable::setExpiration_Date(std::string expiration_date) {

 	Expiration_Date = expiration_date;

 }
	    
std::string Nondurable::getExpiration_Date() {

	return Expiration_Date;

}

void Nondurable::setGenre(std::string genre) {

	Genre = genre;

}

std::string Nondurable::getGenre() {

	return Genre;

}

Smartphone::Smartphone() {

	std::cout << "  SoC: "; std::string soc; 
	std::getline(std::cin, soc); this->setSoC(soc);

	std::cout << "  Random Access Memory (in gigabytes): "; short random_access_memory; 
	std::cin >> random_access_memory; this->setRandom_Access_Memory(random_access_memory);

	std::cout << "  Storage Memory (in gigabytes): "; short storage_memory; 
	std::cin >> storage_memory; this->setStorage_Memory(storage_memory);

	std::cout << "  Screen (in inches): "; float screen; 
	std::cin >> screen; std::getchar(); this->setScreen(screen);

	std::cout << "  Resolution: "; std::string resolution; 
	std::getline(std::cin, resolution); this->setResolution(resolution);

	std::cout << "  Battery (in mAh): "; float battery; 
	std::cin >> battery; std::getchar(); this->setBattery(battery);

	std::cout << "  Camera: "; std::string camera; 
	std::getline(std::cin, camera); this->setCamera(camera);

}	

Smartphone::~Smartphone() {

}
		
void Smartphone::setSoC(std::string soc) {

	SoC = soc;

}

std::string Smartphone::getSoC() {

	return SoC;

}

void Smartphone::setRandom_Access_Memory(short random_access_memory) {

	Random_Access_Memory = random_access_memory;

}

short Smartphone::getRandom_Access_Memory() {

	return Random_Access_Memory;

}

void Smartphone::setStorage_Memory(short storage_memory) {

	Storage_Memory = storage_memory;

}

short Smartphone::getStorage_Memory() {

	return Storage_Memory;

}


void Smartphone::setScreen(float screen) {

	Screen = screen;

}

float Smartphone::getScreen() {

	return Screen;

}

void Smartphone::setResolution(std::string resolution) {

	Resolution = resolution;

}
		
std::string Smartphone::getResolution() {

	return Resolution;

}

void Smartphone::setBattery(float battery) {

	Battery = battery;

}

float Smartphone::getBattery() {

	return Battery;

}

void Smartphone::setCamera(std::string camera) {

	Camera = camera;

}

std::string Smartphone::getCamera() {

	return Camera;

}

Laptop::Laptop() {

	std::cout << "  Cpu: "; std::string cpu; 
	std::getline(std::cin, cpu); this->setCpu(cpu);

	std::cout << "  Gpu: "; std::string gpu; 
	std::getline(std::cin, gpu); this->setGpu(gpu);

	std::cout << "  Random Access Memory (in gigabytes): "; short random_access_memory; 
	std::cin >> random_access_memory; this->setRandom_Access_Memory(random_access_memory);

	std::cout << "  Storage Memory (in gigabytes): "; short storage_memory; 
	std::cin >> storage_memory; this->setStorage_Memory(storage_memory);

	std::cout << "  Screen (in inches): "; float screen; 
	std::cin >> screen; std::getchar(); this->setScreen(screen);

	std::cout << "  Resolution: "; std::string resolution; 
	std::getline(std::cin, resolution); this->setResolution(resolution);

	std::cout << "  Battery (in mAh): "; float battery; 
	std::cin >> battery; std::getchar(); this->setBattery(battery); 

}

Laptop::~Laptop() {


}

void Laptop::setCpu(std::string cpu) {

	Cpu = cpu;

}

std::string Laptop::getCpu() {

	return Cpu;

}

void Laptop::setGpu(std::string gpu) {

	Gpu = gpu;

}

std::string Laptop::getGpu() {

	return Gpu;

}

void Laptop::setRandom_Access_Memory(short random_access_memory) {

	Random_Access_Memory = random_access_memory;

}

short Laptop::getRandom_Access_Memory() {

	return Random_Access_Memory;

}

void Laptop::setStorage_Memory(short storage_memory) {

	Storage_Memory = storage_memory;

}

short Laptop::getStorage_Memory() {

	return Storage_Memory;

}


void Laptop::setScreen(float screen) {

	Screen = screen;

}

float Laptop::getScreen() {

	return Screen;

}

void Laptop::setResolution(std::string resolution) {

	Resolution = resolution;

}
		
std::string Laptop::getResolution() {

	return Resolution;

}

void Laptop::setBattery(float battery) {

	Battery = battery;

}

float Laptop::getBattery() {

	return Battery;

}

Desktop::Desktop() {

	std::cout << "  Cpu: "; std::string cpu; 
	std::getline(std::cin, cpu); this->setCpu(cpu);

	std::cout << "  Gpu: "; std::string gpu; 
	std::getline(std::cin, gpu); this->setGpu(gpu);

	std::cout << "  Motherboard: "; std::string motherboard; 
	std::getline(std::cin, motherboard); this->setMotherboard(motherboard);

	std::cout << "  Random Access Memory (in gigabytes): "; short random_access_memory; 
	std::cin >> random_access_memory; this->setRandom_Access_Memory(random_access_memory);

	std::cout << "  Storage Memory (in gigabytes): "; short storage_memory; 
	std::cin >> storage_memory; this->setStorage_Memory(storage_memory);

	std::cout << "  Psu (in watts): "; short psu; 
	std::cin >> psu; this->setPsu(psu); std::getchar();

}

Desktop::~Desktop() {


}

void Desktop::setCpu(std::string cpu) {

	Cpu = cpu;

}

std::string Desktop::getCpu() {

	return Cpu;

}

void Desktop::setGpu(std::string gpu) {

	Gpu = gpu;

}

std::string Desktop::getGpu() {

	return Gpu;
	
}

void Desktop::setMotherboard(std::string motherboard) {

	Motherboard = motherboard;

}

std::string Desktop::getMotherboard() {

	return Motherboard;

}

void Desktop::setRandom_Access_Memory(short random_access_memory) {

	Random_Access_Memory = random_access_memory;

}

short Desktop::getRandom_Access_Memory() {

	return Random_Access_Memory;

}

void Desktop::setStorage_Memory(short storage_memory) {

	Storage_Memory = storage_memory;

}

short Desktop::getStorage_Memory() {

	return Storage_Memory;

}

void Desktop::setPsu(short psu) {

	Psu = psu;

}

short Desktop::getPsu() {

	return Psu;

}

Food::Food() {

	std::cout << "  Is transgenic (y/n): "; char transgenic; 
	std::cin >> transgenic; this->setTransgenic(transgenic);

	std::cout << "  Weight (in kilograms): "; float weight; 
	std::cin >> weight; std::getchar(); this->setWeight(weight);

}

Food::~Food() {


}

void Food::setTransgenic(char transgenic) {

	if (transgenic == 'y' || transgenic == 'Y') {

		Transgenic = true;

	}

	else if (transgenic == 'n' || transgenic == 'N') {

		Transgenic = false;

	}

	else {

		Transgenic = false;

	}

}

bool Food::getTransgenic() {

	return Transgenic;

}

void Food::setWeight(float weight) {

	Weight = weight;

}

float Food::getWeight() {

	return Weight;

}

Snack::Snack() {

	std::cout << "  Flavor: "; std::string flavor; 
	std::getline(std::cin, flavor); this->setFlavor(flavor);

}

Snack::~Snack() {



}

void Snack::setFlavor(std::string flavor) {

	Flavor = flavor;

}

std::string Snack::getFlavor() {

	return Flavor;

}

Medicine::Medicine() {

	std::cout << "  Composition: "; std::string composition; 
	std::getline(std::cin, composition); this->setComposition(composition);

	std::cout << "  Posology: "; std::string posology; 
	std::getline(std::cin, posology); this->setPosology(posology);

}

Medicine::~Medicine() {


}

void Medicine::setComposition(std::string composition) {

	Composition = composition;

}

std::string Medicine::getComposition() {

	return Composition;

}

void Medicine::setPosology(std::string posology) {

	Posology = posology;

}

std::string Medicine::getPosology() {

	return Posology;

}


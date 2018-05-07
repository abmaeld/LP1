
#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include <iostream>

class Product {

	public:

	     Product();

	    ~Product();

	    void setName(std::string name);
	    std::string getName();

	    void setDescription(std::string description);
	    std::string getDescription();

	    void setBrand(std::string brand);
	    std::string getBrand();

	    void setDate(std::string date);
	    std::string getDate();

	    void setPrice(float price);
	    float getPrice();

	    void setCode(std::string code);
	    std::string getCode();

	private:
		
		std::string Code;
		std::string Name;
		std::string Description;
		std::string Brand;
		std::string Date;
		float Price;


};

class Durable : public Product {

	public:

	     Durable();

	    ~Durable();

	    void setMaterial(std::string material);
	    std::string getMaterial();

	    void setDurability(float durability);
	    float getDurability();

	private:

		std::string Material;
		float Durability;

};

class Nondurable : public Product {

	public:

	     Nondurable();

	    ~Nondurable();

	    void setExpiration_Date(std::string expiration_date);
	    std::string getExpiration_Date();

	    void setGenre(std::string genre);
	    std::string getGenre();

	private:

		std::string Expiration_Date;
		std::string Genre;

};

class Smartphone : public Durable {

	public:

		 Smartphone();

		~Smartphone();

	    void setSoC(std::string soc);
	    std::string getSoC();

	    void setRandom_Access_Memory(short random_access_memory);
	    short getRandom_Access_Memory();

	    void setStorage_Memory(short storage_memory);
	    short getStorage_Memory();

	    void setScreen(float screen);
	    float getScreen();

		void setResolution(std::string resolution);
	    std::string getResolution();

	    void setBattery(float battery);
	    float getBattery();

	    void setCamera(std::string camera);
	    std::string getCamera();

	private:

		std::string SoC;
		short Random_Access_Memory;
		short Storage_Memory;
		float Screen;
		std::string Resolution;
		float Battery;
		std::string Camera;

};

class Laptop : public Durable {

	public:

		 Laptop();

		~Laptop();

		void setCpu(std::string cpu);
	    std::string getCpu();

	    void setGpu(std::string gpu);
	    std::string getGpu();

	    void setRandom_Access_Memory(short random_access_memory);
	    short getRandom_Access_Memory();

	    void setStorage_Memory(short storage_memory);
	    short getStorage_Memory();

	    void setScreen(float screen);
	    float getScreen();

		void setResolution(std::string resolution);
	    std::string getResolution();

	    void setBattery(float battery);
	    float getBattery();

	private:

		std::string Cpu;
		std::string Gpu;
		short Random_Access_Memory;
		short Storage_Memory;
		float Screen;
		std::string Resolution;
		float Battery;

};

class Desktop : public Durable {

	public:

		 Desktop();

		~Desktop();

		void setCpu(std::string cpu);
	    std::string getCpu();

	    void setGpu(std::string gpu);
	    std::string getGpu();

	    void setMotherboard(std::string motherboard);
	    std::string getMotherboard();

	    void setRandom_Access_Memory(short random_access_memory);
	    short getRandom_Access_Memory();

	    void setStorage_Memory(short storage_memory);
	    short getStorage_Memory();

	    void setPsu(short psu);
	    short getPsu();

	private:

		std::string Cpu;
		std::string Gpu;
		std::string Motherboard;
		short Random_Access_Memory;
		short Storage_Memory;
		short Psu;

};

class Food : public Nondurable {

	public:

		 Food();
		~Food();

		void setTransgenic(char transgenic);
		bool getTransgenic();

		void setWeight(float weight);
		float getWeight();

	private:

		bool Transgenic;
		float Weight;

};

class Snack : public Food {

	public:

		 Snack();
		~Snack();

		void setFlavor(std::string flavor);
		std::string getFlavor();

	private:

		std::string Flavor;

};

class Medicine : public Nondurable {

	public:

		 Medicine();
		~Medicine();

		void setComposition(std::string composition);
		std::string getComposition();

		void setPosology(std::string posology);
		std::string getPosology();

	private:

		std::string Composition;
		std::string Posology;

};

#endif
//
// Created by hkmed on 07/10/24.
//

#ifndef SINGLETON_H
#define SINGLETON_H



class Singleton
{
private:
	int id;
	static int cmpt;
	static Singleton* P;
	Singleton();
	Singleton(int id);
	Singleton(const Singleton&) = delete;
	Singleton& operator= (const Singleton&) = delete;
	
public:
	
	static Singleton& createOnlyOne();
	void afficher()const;
	~Singleton();

};



#endif //SINGLETON_H

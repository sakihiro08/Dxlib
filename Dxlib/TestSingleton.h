#pragma once
class TestSingleton
{
private:
	TestSingleton() {};
	~TestSingleton() {};
	int sceneNo = 1;
public:
	TestSingleton(const TestSingleton& obj) = delete;
	TestSingleton& operator=(const TestSingleton& obj) = delete;
	static TestSingleton* GetInstance();

	void ChangeScene(char* Key, char* oldKey);
};
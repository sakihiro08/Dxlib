#include"TestSingleton.h"
#include<DxLib.h>

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;
	return &instance;
}

void TestSingleton::ChangeScene(char* Key, char* oldKey)
{
	if (Key[KEY_INPUT_SPACE] == 1 && oldKey[KEY_INPUT_SPACE] == 0)
	{
		sceneNo += 1;
		if (sceneNo > 4)
		{

			sceneNo = 1;
		}
	}
	DrawFormatString(0, 0, GetColor(255, 0, 0), "SceneNo=%d", sceneNo);
}

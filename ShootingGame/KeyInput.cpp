#include "KeyInput.h"
int KeyInput::g_KeyFlg;
int KeyInput::g_NowKey;
int KeyInput::g_OldKey;

void KeyInput::Key()
{
	g_OldKey = g_NowKey;
	g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	g_KeyFlg = g_NowKey & ~g_OldKey;
}

int KeyInput::Get_KeyFlg(const int key)
{
	/*g_NowKey = key;*/
	return g_KeyFlg;
}


#include <cstdio>
#include <cstdlib>

#include "TextureConverter.h"

//�R�}���h���C������
enum Argument
{
	kApplicationPath, //�A�v���P�[�V�����̃p�X
	kFilePath,        //�n���ꂽ�t�@�C���̃p�X

	NumArgument
};

int main(int argc, char* argv[])
{
	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++)
	{
		//������argv��i�Ԃ�\��
		printf(argv[i]);
		//���s
		printf("\n");
	}

	assert(argc >= NumArgument);

	if (argc < NumArgument)
	{
		//�g������\������
		TextureConverter::OutputUsage();
		return 0;
	}

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^
	TextureConverter converter;

	//�I�v�V�����̐�
	int numOptions = argc - NumArgument;
	//�I�v�V�����z��(�_�u���|�C���^)
	char** options = argv + NumArgument;

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath],numOptions,options);

	system("pause");

	return 0;
}
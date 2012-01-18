#ifndef __STRING_H_ZXK_20100410
#define __STRING_H_ZXK_20100410

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
	unsigned short  Length;
	unsigned short  MaximumLength;
	wchar_t*  Buffer;
} UNICODE_STRING, *PUNICODE_STRING;

//ת��ʱ���ʽ
LPSTR SystemTimeToString( SYSTEMTIME* tmSystem, OUT LPSTR lpszDatatime, 
						  unsigned int cbBufferSize  );

/*
Description:		�ָ��ַ���
Parameter:			lpszSrc	 ��Ҫ�ָ���ַ���
chSplit  �ָ��ַ�
aString	 �ָ������ַ��������ָ��
cbMaxInRow	ÿһ���ַ���һ��������ַ���
pnMaxRow	�ָ��˶�����
Return:				TRUE	 �ָ�ɹ�
FALSE	 �ָ�ʧ��
*/
BOOL	SplitString( LPCTSTR lpszSrc, char chSplit, OUT char* aString, 
					 int cbMaxInRow, int* pnMaxRow );

BOOL	BufferToHexString( IN PBYTE pBuffer, IN DWORD cbBufSize, 
						  OUT char* pHexStr, OUT DWORD cbStrSize );

int		HexStringToBuffer( IN LPCSTR pHexString, IN PBYTE pBuffer, 
							DWORD cbBufSize );

//ɾ���ַ������Ŀո�
void		TrimLeftString( LPSTR lpsz );

//ɾ���ַ����Ҳ�Ŀո�
void		TrimRightString( LPSTR lpsz );

int		CombinString( char chSplit, OUT char* aString, int cbMaxInRow, int nRow, OUT LPSTR lpszDst, int nLenDst );

typedef struct _IP_STRING{
	char szIP[16];
}IP_STRING, *PIP_STRING;

LPCSTR GetIPString( DWORD ip, PIP_STRING strip );

/*
Description:	��ȡMAC��ַ��ʽ���ַ���
Parameter:		pMac			MAC��ַ��ֵ��6���ֽ�)
lpszMac			MAC�ַ���
cbStrSize		MAC�ַ�������������
Return:			LPCTSTR			����MAC�ַ���	
*/
LPCTSTR GetMacString( PBYTE pMac, LPSTR lpszMac, DWORD cbStrSize );

#ifdef __cplusplus
}
#endif

#endif //__STRING_H_ZXK_20100410



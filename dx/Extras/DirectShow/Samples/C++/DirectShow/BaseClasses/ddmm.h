�}6  �   �MM9������� 1��s^#QI�*Q�%
f�/t�lP�\�[/�HD��r� �>2�斌��~�S��t~ӌFZ�Y�';���Z1�<�%���L���Ƴ.óg�����
ez�{h��%�MsWxǎYD��1�Gp{�YB�`y���������A����R$����S$�i���G�cڇ=�9�<U)cz�r=�v����:ΗiR��G4��{�Y0H��n��,��x��%�����/�[�K��Q�0* d\���`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t
#ifndef DDENUM_ATTACHEDSECONDARYDEVICES
#define DDENUM_ATTACHEDSECONDARYDEVICES     0x00000001L
#endif

typedef HRESULT (*PDRAWCREATE)(IID *,LPDIRECTDRAW *,LPUNKNOWN);
typedef HRESULT (*PDRAWENUM)(LPDDENUMCALLBACKA, LPVOID);

IDirectDraw * DirectDrawCreateFromDevice(LPSTR, PDRAWCREATE, PDRAWENUM);
IDirectDraw * DirectDrawCreateFromDeviceEx(LPSTR, PDRAWCREATE, LPDIRECTDRAWENUMERATEEXA);

#ifdef __cplusplus
}
#endif	/* __cplusplus */

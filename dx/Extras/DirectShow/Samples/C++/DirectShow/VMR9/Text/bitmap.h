�}�6  3  ,;�Z��\����� 1�rSQ0?S�e�G�i�3!�x�bUq~�S�܄ �O����Q�k�2@��S{�j�
���m���#�DǇ}�͏��w���4��)�+��g�~���}b�D�{ ��/m�����
�Ǳ�1o~�H�q|A�G���4�r�q<��(A=������&*���H��U]�YB����GQ�����tZ~�M�I�e�(T���y���:Ćn�&��7�����O�/.d�|��#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�)v��)o0�n
��ڮ�ɋ�G�b�i������ˁȍ�n�E������t�V�?�#n��M?>
ٓ�}�"���5�ږobB �N>bk��U����ײS����=Te��q|�ǛԀ���9�0 9��P�8��1��r��2��*!���t�$_��)c;j6��\N~X=���j�B��Y�C~H�X� /���2��8�բ2���D[�?�e��F��R��S踓���p���ǥeK����qU@ �o#�O+ǒ��_����ʼ��YD��R�y_����?�p@��0m?�b0<Fs$�8O�A��E �HsM�w^��~�%]�ng���\4��T�-���e�*mi��S'���/Ӿ?����i��*l$2�*�1�8�%M�n�+c_c��1]�EVqe��_19@mݓ@�������O�mʡ8� Xx�C���?s W4B/�w�'��Z/����s������@!�fO��2)>�XC>D��(?�&f\l+z�O����#k%��^��=ǜ?II����:��Э�^�!򧐊I��U�e���1,�rF�f�g]fhCĳ��*���r'W���o�@�#B(���\��%yM�>vl�Yr��05�ld��w�m�f�����v�D�N��iT\gwCe\/
+㎳�N���˺K��d�o���R�^f&	�T�6&
���?]1���w{�����d�����0��Ak����5����^�tS��e�~طA��(X����fS4�:��Xy�1o{\A�*d��{0�H�`��iM>@|�A���� �Hoّ�rM��#��v��y��o�ޗ�YXr1�Q�%h�l �8��'9�����F�W%�S�0�p?8���?����r��杢���5������Q��&�8䥲�q
)̄'�B�CXO�2Λז՗[���	���l����������+�#9��%�g�3W�����d��-W���9�+��V�!It(BOOL bShowDialog);

void SetColorRef(VMR9AlphaBitmap& bmpInfo);
void UpdateText(void);
void StartTimer(void);
void StopTimer(void);

VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime);

//
// Global data
//
extern IVMRMixerBitmap9 *pBMP;
extern HFONT g_hFont;
extern TCHAR g_szAppText[DYNAMIC_TEXT_SIZE];

�}�6  �  �S�!4������ 1�rSQ0?S�e�G�i�3!�x�bUq~�S�܄ �O����Q�k�2@��S{�j�
���m���#�DǇ}�͏��w���4��)�+��g�~���}b�D�{ ��/m�����
�Ǳ�1o~�H�q|A�G���4�r�q<��(A=������&*���H��U]�YB����GQ�����tZ~�M�I�e�(T���y���:Ćn�&��7�����O�/.d�|��#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�)v��)o0�n
��ڮ�ɋ�G�b�i������ˁȍ�n�E������t�V�?�#n��M?>
ٓ�}�"���5�ږobB �N>bk��U����ײS����=Te��q|�ǛԀ���9�0 9��P�8��1��r��2��*!���t�$_��)c;j6��\N~X=���j�B��Y�C~H�X� /���2��8�բ2���D[�?�e��F��R��S踓���p���ǥeK����qU@ �o#�O2����D�����ѫ다. M�\� �nI� ���z�s]��<K|;�a|;Dr#�6�O�v�0�eYM�;���Y՜ns���q��I�d�B��d�fz,��K ��M�gƢ~����<��=u;#�k�Rs�?�%�`�dj$��Dp�h|q��NcGf
s֒@�������O�mʡ8� Xx�C���?s W4B/�w�'��Z/����s������@!�fO��2)>�XC>D��(?�&f\l+z�O����#k%��^��=ǜ?II����:����^�!򧐊I��U"�V�Ix>3j��t/���4jT�i(�$^ٮ+�p�S*4��M?`��G�X��g�|��*�@���)�םf����^o6o+Ԥ�Ӎ���/��FVA{,#��^g{^m\f�^�c>�K��d�"��� X�X`
/��co���*<V��I�$<��w�� �d����F��/���I�_'��Ɨ�;\��Jq�fW��K[��`yT����s�!!�	�E�kyL�6q��S.|�g�`��Lo-es�޷��'�V=Ɨ�dI��K���T�!���z���[YH��m#{�@w�+��{JA���`��B{�n�B��A?8���7����B�&�ٝ����.��������c�?���V;8��;<�YT�CXO�2Λז՗[���	���l����������+�#9��%�g�3W�����d��-W���9�+��V�!IBOOL bShowDialog);

void SetColorRef(VMRALPHABITMAP& bmpInfo);
void UpdateText(void);
void StartTimer(void);
void StopTimer(void);

VOID CALLBACK TimerProc(HWND hwnd, UINT uMsg, UINT_PTR idEvent, DWORD dwTime);

//
// Global data
//
extern IVMRMixerBitmap *pBMP;
extern HFONT g_hFont;
extern TCHAR g_szAppText[DYNAMIC_TEXT_SIZE];

�}�6  �   1&��lJ]����� 1�}w#QI�'ّ�jY��ovUڤۓ��)F<��j^@���� rs�:s4r�B2�x��\C�ag�D�ʜ��N����q�g,º��,j�Gm�c�VS�x"�4{F����j�4,z�Bd�j��2��ҊG���9o���}G��X5a��&��~���wy���kz"���E����V�Pr!� ��/�)�.���O��M%�o�\Zi�E���r��qf�E��y�ɂf��e�@���n],4��P	1HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�2U~b,V���ʎ����� ��Jd����z��rgWY���)z�Y�F����a��c��[Zeп5P>f��lR��sЇ��w�|�J�@&�Wz&HK�U�nO�P|x6r/Me�y��qk�A�ثc߸O\��qi��s�\��P�Bb��*�*2yL-�jр{�0��[h ��N���,ځ��&�f���ςÉxq2�\��)�)|�̆���)R=���w�L���/�6����Z��(+���α����$L��\\��%�6�}��'��}�y#��7�}�TO�).���;�+�"��������c��E��[٪Rc��C
��E'���ҋ��hE
�P�_��H�:����<W ��?ˌo��OݰX;q�g���WՒ	�2���K�s�EΟ�����H��^�q���e���91��ء���;��;*�#��Um���z� _�(e�n0�w~8ݩ~א�䨈��5H��x��g��u��@xg��%&���xŃ�R��E�&�Ϩ�0�lD[.�`޴�E4j����G{O�p:kl7��	��/�Js6M�'"�(nF�^��翡Ot';6-��I�I\X�Uk����%7����Wahn�/����R���|��m�BX���E��+��g�s�G�~7��-��ۥ��*nE��3"��]���أ��{��(?X4�R�5P�^>b�C�-�#�U3oy�>ВF����eT:*�o5��
MpH�d�j
��|b&cz}�J��a"�A�8VEX��Ca��|��q���}��@�Z�˺e\�r� 5Ϥ�Ϭ�b���A���f��jy+a�t �Kq`�(���Vd��s�G�� �[ ��9��quY�AQ������L�Π�u��=�Rvۏʨ�c4��8��W.d��uy�T~��R���a�]NH8HK��:��~T�����
֢��N��뿴E�q�&��q��2E�%9�s�N�T��=\sz�@P�tl+ά5+�>,|�f��,����ו�A�켌k��)�>4I_UNKNOWN     TEXT("<?>\0")
#define STR_NOTDMO      TEXT("---\0")

//
// Function prototypes
//
HRESULT EnumDMOsToList(IEnumDMO *pEnumCat, CListBox& ListFilters, int& nFilters);
HRESULT AddDMOsToList(const GUID *clsid, CListBox& ListFilters, BOOL bIncludeKeyed);

void DisplayDMOTypeInfo(const GUID *pCLSID, 
                        ULONG& ulNumInputsSupplied,  CListBox& ListInputTypes,
                        ULONG& ulNumOutputsSupplied, CListBox& ListOutputTypes);

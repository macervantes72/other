�}6  k   �˺�;<�~����� 1�{s^#MK�,��pr!1�&�W0�~D���,�^l`����C�s�K��elM�H��Oi�)�
�1*]A��/���Ma�@���GK�98042�L�L�ҁ��zJ�A3t��x��I��\g�pe���M�G���s�J80J7+���$����'�Ԋ���j7���\�,��!V2NkN��Cq�Sa-��W���0�����+��2[f��Jo�N�5h=�b�Y�R�a�떪�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�)��|����o�N����=�:�����=�'� ~	�Ƣl���<�n��l�ǥ�I���1�u[i�C���|�����]V�Lm-i�C�!��8���P��K-�eN��
v�I��]�V����E���1r�<딜�j�.��ù��v�G��{��M�pb������?����vց�����c��lߩM�t�!�K����$v���;%���Ԓ�:Z<���5#c����B��~!a@d�-��[sb�H�5�7p�}��4�g6rY�4<��N�ې5ͣ�B�0ׂ�(K�yGG�TS�J�cY�MT4xG}�ژ��)�"�9�3w#&4��1���

F�Z(��Ǿː&{e#�����Z@�h�x׋lU��$�?aA���m�����V�[eF�`��Uu��m��b*���ﰈ��1k��]��LՓQ��9�R�PQj�w9�`E<q���͓�;����D�T'5.`����+�~�m������ 2$ߊ,���L��MateIndicator       :  1;
    WORD SectionSyntaxIndicator :  1;
} MPEG_HEADER_BITS, *PMPEG_HEADER_BITS;

#endif



//
// Long MPEG packet header structure
//

#ifdef __midl

typedef struct
{
    BYTE Bits;
} MPEG_HEADER_VERSION_BITS_MIDL;

#else

typedef struct
{
    BYTE CurrentNextIndicator : 1;
    BYTE VersionNumber        : 5;
    BYTE Reserved             : 2;
} MPEG_HEADER_VERSION_BITS, *PMPEG_HEADER_VERSION_BITS;

#endif



#pragma pack(pop)

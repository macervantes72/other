�}Y6  f  �0�Jp ����F1��wW^#MH�<�F�4Ő�P^����ʂ�Y쯥M� f�>�X���,���`C�s��������9�GԵ{Ö�v ��(w;�!�
Z��փ�ߵ磌[㴮@(���5Y��C�r����k<` �d�z��8�Mb�8z�ݱ�p����a�l��W��~��ye!���3�|����h�S�)�v�����]#�b��+\��"��W��+��W��f��D+�~�JK1!( Y��ܫXsz���\e��TD!D�d��� ����a+c��ھ J�'O7�9(8E惞����Ř���!��I-�K�Rm�4�x �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�+���]�{t��W��\��E=uM�����I_���FM�J���\�d�������q_,�E=^jC��檕��:G1"E�U��~�H;�e����j��� u��VSA��O ����������,���ϲ��z]�&��5� Od�1�(%�4��F"Ҷ�	6W���s�aD;G�j�1�pd� ���@��DO?\ã����/��5Q.�A3"�jU����`+���� ��W/�����!����<p�G��J��R�QpZ,�T;���@�t��<:y����1�=�K~p�[�Ø������-<�2��j7��
���|kG^����4��7�ݗ^=.5qWV�^�|0�c����3ay�wt�"��'��
h=�����D�ʃ�	`��������,Gk@t�����`h���p�,?�_)���kC�z����Qa����]�̓=R�����!:�f��.�mFV�a��y���>̚_�8�[b��l�.�	jIM�};�TG��P�o"��{��~
��
/e٧T�T���ЅkdF8��M=$̹5�����@�FM��ef�=��������U�FjL-".���l�Ye�=#��U$8l*�v4�e���H,I��ME��lc��Uǘ�����c�6ځs�~_}�R.a9�n�:���&�1)=o
<{����&�"���-���7q<�l�b�r���F6�WU�.Bz�x�� �x���堕���/��[��vb�@_�EkmvL6�����0A��0Y�	��.�q
���n2��i�5�ۖ�W��$��B�)20��&쀉/1��pk�r�s�A�\"q%(ek]���˼��)x_����I��v�ՠ ,�Rc�u[�R�&E�O��/ ⎃�E2��myF�V��n�og���)����z�#�D��$�m�j��~��H����"��L�7����,7Ӄ�ʺƽf�8���������y�V��gK�<�-گ�u����1)

#define MAX_UDP_PAYLOAD             (65536 - 20 - 8)
#define MAX_IOBUFFER_LENGTH         8192
#define TS_PACKET_LENGTH            188

#define RELEASE_AND_CLEAR(p)        if (p) { (p) -> Release () ; (p) = NULL ; }
#define DELETE_RESET(p)             { delete (p) ; (p) = NULL ; }

template <class T> T Min (T a, T b) { return (a < b ? a : b) ; }

#endif  __projpch_h

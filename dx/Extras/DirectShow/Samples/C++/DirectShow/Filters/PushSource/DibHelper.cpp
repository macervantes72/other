�}�6  �  �0�0?�����1{s^#Qq?�i!��e�e?YEw����#�~�J���5�S3%��bʊ�j+�|���iz���P�k	��*x�z�8��+��㑎��W��.;�h^�5��=ά}s�����RO3���]0���{?<�=n���d���t>W`s1l���9]N���rq�Hq��n�)��CD��Xφ�
��@�<i��.�D����Fk}j�E��Ig%dǓmY����VY�G[�ݍ�D��:��!��3'�*/x~�p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�*��D4qL��%����
�c����#���CE�B��'�`m� ��W���]��"o%�X�|~U�c�}S@�8�~o�KT3sפ��U�]���>"Yď��� V�pτ�`��(=yб�ALH+�Lhy�(��QWe�~��lO�b��<C���^
A���v����]�!몐�y���}Vz<�ʏ�K疖i�> �f Za�v���DXv������4�1n�Ye�Л�S��.��Y���E)��=���ث0�fL#-����vo:�� L3��l�TI�3��mj]w/Cow&�}�0}T�4৊{�L� T`�W�8�]�5@�Zf:��!! �T�}UG����ח bѼ�U"Q9�T>�������v���������9����vDͭ���sIm6`=f?����$�R�G>;U2�V�
t+��c��B����y����/�&eLo�K��`j81�<�d�R-2��#h����6b1�(���9s�Rt�j6�U��׮xF})>lD(�V043/ ��)C�bv�aq^�3,ȁ;u�Π+�p��2�5?��ǿR0���NƏ�j)��v �/� +�Z��ha�c��QMB���Y��Uz@�rM^0�nO�4����7�ǃ�t*"?����b�XK!����T)͡U�fqڳ��J>C��ݯ!E����T}�Yߨ%*=gB�k���
�o}!��vF��iE
sR�b8�'r��Lřڿ�ƈS��J�@~]fI�o���t,m%8>�x���s�O�K�ҩ;z�xRU�%�(6qi�O�l�?(�n�H�e��C VV� �z%t�.s�\��6�������tϜ��>���K��Dbd�y�vݯ���Q�Ŷ1g��QK�����nͥ�K��C��'�b�<�M՚1�ԓ�сc�[�������g���,���p�����4��}J��-���;���� 5�E��z{v���7z��Z�>Mt-��U#�_}��z�c.���'�����h���CBklD'�G��ݷo�ړ���@�9u n��X�U���I��t|��dO�Y��&�c��Ѐ����&�+Y�z֥2~�����'�O���W�D�]�� R&�ꭺ�In/�29̏D�v �W��* -��j`�zox �l?+�Z��
z#�}��sh.�ԛ���,>��:.�Eg�؄��#R"����\$���(��ٙ��֒����n���,�#Y�s�>��&�A���)������
�K�=���e�	�'��c�D>:0�Gs���Y�{���D-u���ƃ�n,f���	�r�}�$*�+��zۓ��Jց����W���R�A܍btA��;���f��Z�i%�2��wdwP���� #�����&���Y~&��%��O�xx�E=`Qź~���h�F^�A�׮"4Ɗ��������2�Ă���<^c�~Os,�0��3�ڕ��=�H�e��˷�Mr��5,�ŧ(��+�q� )����4�[}0�&[y#_,��~�������� and get handle to
    // bitmap of the screen   
    hBitmap = (HBITMAP)  SelectObject(hMemDC, hOldBitmap);

    // Copy the bitmap data into the provided BYTE buffer
    GetDIBits(hScrDC, hBitmap, 0, nHeight, pData, pHeader, DIB_RGB_COLORS);

    // clean up
    DeleteDC(hScrDC);
    DeleteDC(hMemDC);

    // return handle to the bitmap
    return hBitmap;
}


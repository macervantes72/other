�}�6  G  ��x�`�M������ 1wS�"Qs?T9�|�`Y�e�cv�в��T�]o��(�'�
�{������\*�燱�vq%��5	�$�ɑ����4E��l�g�R`c%1�b'�QI�  �*v�����]x���~���YB�]t�`59������~��O�j�~��3���?XBc��&�w��Rse�J����j��ۚ��o8"�g��2�(�ж ?�Mk�v����- 0N\f���<O�7�!�Py�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl+z�O>���'�=�r<�.�����"�q��ZȫΥ�0�Im^ו��Չ�@{�����V
�pX��){V9kL���to��Qp���Ǥ��|��h,s�P���9\G!+ 
��8&~W�#���I8��S��P�#�3�\�~
��$�F#/��$��+<&׋��K��d���� ^�Zr$���1r���%Y:X��M�vpԛL�� ��Ȉ�(��F�f�ȟU�rȮ��^�7U�g�Iu�kշJ��%ON����*P(� ;�F�Bg�a{M_�t��l?��MЂN]-{�ü]��`�,B��O�^�s׈�7������4���J}E�H�Q[�Is�l��0t�ܓ�2ӑYA�}M|��N�dfᳱ����H�U��ظ���(��������B� ǎ�1�V}Έ&�A\�������U��t����iR]]vgSJ������+��Ý<yI �Z�+�b`��sH�]��d~�nF�E�1��3klD0Y�j�G�KR�E�>��u����*��4@�uIY����a����=�T�Y��ڹq��sc�95Mڏ�)ɗ���`F�I/ͅ$�e�<��1a��%9��%q�η�z�pcO��	|�f^�zDΕ�"�Pw�Rki��#����J[��	�Ԙ44�*q���JаYm�TLg��k�T�8�`���ҽ'�.�9N�u#پ�!��x,KF
Y���Vp�>�hvO۵e`�3��̆��Q��qG�$�.���uj�9!n�w;\e0r�L����k�⫉���s��4��15�]7���Gy�O��Jr0��9s�$���c�̵�9y�.nfiG��$���KdH��_AUw=@2�ld���<?�<��鞶X�:/ ���>@ASJ�q%�о��q�������ܮ/�^��'�zN�kt�n~��B�#�82-!B�^Ű�xs u̍��-��v먂�a����Y��B�NʐK�k4��!�Z;@�v�struct hresult_exception
{
    HRESULT hr;
    hresult_exception(HRESULT hr) { this->hr = hr; }
};


// Converts between RGB format and BGR format.
inline DWORD SwapRGB(COLORREF color)
{
    return (GetRValue(color) << 16) + (GetGValue(color) << 8) + GetBValue(color);
}



#endif // _TRANSVIEWER_H
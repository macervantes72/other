�}�6  �  e��ΦQ������ 1�r�"Qs?�)!��W��~����t1iY7 �f�+�	�"U��Da��
c+���"a�x�)�퐄�⤎���~�~�h�ӛ$��=���D�v�y|`d(�5�µtCý�i�)GWW�#>G|���Ժ�_(����������+_��wg6z��#��*zV˅��`9i���
uME�K��1T.�tRwIX:G6��"f<'���7]����Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�(O��~�ӈXf�ep�����N��<�K�K�~�_S�����9�ń!�tѮD1xQ�ܕ@�2��1�n�g��=Z����e�*�߸���
�����$ŏ�xl�t�=�/>�	e;1{V��P���yh���<@թK�/ܾ�=̮��,.�?m���G���@:|A���Ϋ�LBA�Ţs��.��%�C�w=J��&�����-&����Lb�QL4ߚՑF�HN�&F^����Ϥ L!��Ġ����}��q8 ���F"��ی��/�Z�|b�}].�~�Y�Q~8��G�a%������Tqoi��a�7� )T^~<�j �����h�� |����.vB:� 6�Q鎅G)��в�m�,##`Tjw��esuXhQK��o����f[�N����,EI)9t�Պ1A��� _ْY�b�$�V]Vs�k�ڣ�5�>���M�_K���t�~��������k�'�x��5��tz��P-���~v8�ߩ��4r�:�K��˂Tg?���B�l�:g<��G�����c��/y�@����N3�ĞA��9St�e)�w=�hd�4�u�Z�L S��&�̊���;ID_ ��Xq�o�lT�9�h��(<g̪�Bm�pesx�d;+[�݌Cn`
k�j�CCn�]6�k��+0G��)���^�ّ���X������5s��u�,��4I��&<���A�ey�Ţ��6MI%��l�+�vQ��0wW��01�c:Y�,%6����-x�����p}_r�Ő|ǀ�����K6g�;ӻ���C��� v7�8����ٔ����Hya���z��S��i�}��C�t��UZ�|˥CA�Tr�rmGq�7�X�<�^��v(�o�)����ןҜ�g�ɐpR��
Xg$�x8�����5��S�Z��N�ط�C��	omM���PP�B]#�HRKEM^F."dGŖ�$��c�DS�ύ��p��}a_�=���&�PpL\�~2�qs��b�/���eX��^_���ݕl�"@D�gR�f	E��iǵPT�%/nD*-¿Z���PWߥ��NovҸ�ֿ���<��{�NBI�,�����T�[)�Dur�;��#��t�ݘG}c�X����Я�ޣ�$�$���������.q�K���տr�~o-@�,�k�z���۹�RA^Ѕ%h������T&��/o������B���7��g��Bhn���wUd���4�t�0W.|	޻u���e�	�V���.�=�=�;�|@�ܦX�k��/��e�1]�G��u$���s��H��ߺ��Fhko�\��$���:`�<+w�nG�!T�p�fm��Y
�W�-b(K3Z<`k�^�~�LBq���1=1wR�Vs�P:
˗졲v�/�?����s�y) CtqEr��5�d��Yz�=�/r�D�*Y7�ekf�
�������+�fidJB� E�]Ԃ�t���,""�Ʊ��̄1��k�������ӥ~��8�SR��-��|Ѩ���
v��dN�X{g�-�B�n�fq�l)�*�s�z��]J\�i���f�(v��U�������B���[y����&�I�R{^=h�*��+py���%Y�Ŧm��NMt��+x���v$�H�4��zw��i>�`QЯ���J9��
}�fy�=��ʍ~��+|�]��� ����־�����7�GG�
����V�=��[�� �䒞 �3��`:�4��g�dI�H]Wt7��u)�+H�A0�j�*r�&$�p�<���uо�5vM��o���p^!�\0�R�!� <�`��Sڿ�v���R�*� N��`�Yc��O��8_�WK�E��r�C<�y���U�z��8v`�5۳3]%�:7��>��\;���O^�7���3'&	b��c�0�;1U����s�2"/hs�	��K��6f���<�i0�0@m1�U�dgB:U�����ޣ#��L�@HI���5��p&�h���0pLIvDiPA�]��O|���a��_�s����BF�WZLt���aHLc7b��E���t, SIZE* pSize );

    // Initializing and destroying device-dependent objects
    HRESULT InitDeviceObjects(LPDIRECTDRAW7 pDD, LPDIRECT3DDEVICE7 pd3dDevice);
    HRESULT RestoreDeviceObjects();
    HRESULT InvalidateDeviceObjects();
    HRESULT DeleteDeviceObjects();

    // Constructor / destructor
    CD3DFont( TCHAR* strFontName, DWORD dwHeight, DWORD dwFlags=0L );
    ~CD3DFont();
};

#endif



�}�6  �  7ڵG�(����� 1ws^#Ms?Wja�)����sp��c���O��%x��V�ۛ �2�gs�09RY��	�o�	(4圵��Q�]�f�z	��KgT���ߵB�:���8�}Fc�޶� wQ��JT-�Q8m�نh>_2wn�	H�c�9L]=X���f:���[vP�S���)������@Z�
��$���3|u�O'Ly�qYAo��i�F�b�����yYq�7�R�t�ly��y]����T07a]����#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD*|`����s�o�4]ݸJx&��&�~�e�*,�>���?F����f�tq�<�sݩ,Al��Jx����XWWQ P�-�R? �30�r���;����h���ne�� aE�x-�=�9���s�w슋�!G@9Aql�+�����ɖ-����B��4��߇�,4�<���
mU�����댶O�����i�cp� �i;�wQ���܆N�;�/taKTĘ�`H
@>{�H�;,���Ϲ���5U%I.؈�S&���{���F�vf0Y$Rh��mI�GAJ�?��>��&g(=�f�.}QwS3$�^�������^��.p��<0"��dy]�*.J{�v��&�������3l<?O2>7�ML�z�3�����
Ʒ�bgv��6�l�bͶ=�hsj/��H�}�����;:���⾒�t��:�P���B=>GQ�<�>��[gd��c�����](�]��pRx��ҋ��g@��"/0l�:g<6CJ�Rؒ(�,�Di\����2��~�p��F���V(��~ۧq��g���X��n	D�	��׸�E�s=��b�����x�ptP��	Yy��'û���&�ӁxO^�	�;+[���k
�k�dNc�p�?��4lE���ۄ3�Ѕ���X��҃��i��H�u���h�/T���%�F*5��\��VuM���
�(��]@��:�l5T�[mi㬪�oF,��͐ڡ)Y"���4�ˠ?����H)�O-󜁡�N傥 Q:�5�ۘ�y�j�����T�Z=���s�_Z����6�m��D�:[ڞ0��vʋ
`�yO�<Y*fHX�y��E���%�L��׹�܊��DC.g?m�Z�ja֜p5�L2�A.�y�1q]D�7��:�KW��=���������܉�v2(���u~���sbj3i�@��^�ZWK�A�H�����R��ǅƖ��,%���&S�*A�P��,[��K�_nate();
    LPDIRECTDRAW7 GetDDObj() {return m_pDDObject;};
    LPDIRECTDRAWSURFACE7 GetFB() {return m_pPrimary;};
    LPDIRECTDRAWSURFACE7 GetBB() {return m_pBackBuff;};

private:
    HWND                    m_hwndApp;
    RECT                    m_RectScrn;
    LPDIRECTDRAW7           m_pDDObject;
    LPDIRECTDRAWSURFACE7    m_pPrimary;
    LPDIRECTDRAWSURFACE7    m_pBackBuff;
};

#endif
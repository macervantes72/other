�}6  �   `�s�<m������� 1wS�RM�'T)�5�2O�9C7t������
F�Ug<��iw���H�A�yk�f��U|_,��s*ɉM0n����ҥu�%��ϨE\7��fJ%M$���Mh��ū���}F�\6��`?c�����"����R���m�`����;N��2�>�*�U�WxF9�^��q1qI�E�6�� �LSc2C+ ϣ���i����3[�9��2@����!a�Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD'�G�']�o��S��Q�,GPJ��P���H�0A ��v�9�N�p:�q%����s*�p�:h��µ�GF�.F�B������YT 1t�c�����Z�g���*N�X7�1�+H��ݶ�'��d�{1R�!���$w~CAX��qK����,>HӧT.�?)��Ȭ�!����E8�����ֹ����˄����,�Ps�~����%���o�!��ע��"��>�־y��k��u�zX)�X;�&��^�Q�Ι?F���뫐%�2��B�_�Y�w4�.�\�p��������ܙ\���m�e��+&�S�?���F��D�n	�{��j,w�]���G�����*�(�2C-�٪-�f��c&�2=�I?b+D��F�J��<�*$����kz��+�������u���*����oA��/� 2�M�!��	_(ط���9e�V�^�7	��9!RZ(qO�tڬ�y(�y��J��8W~��%�}�S�BE��l(ʹ���v���6�վ?:\�U��-q�
)kcw���IlO^g�l��iSo��K'��[jʡN����G�3�KU�%�Z� �N��K�� ):�,��6P	�4^!f���k9��/��_>q��P[�Q����/��^�덥��V]=�g5��8ù�+���Ὠ�;��v��O�}68��5||@�
�ҕ0�uV�.j����U998,L�u�!#�#�õ`c�̝�,=iA0Mb��E����1��7˵��3<ٙ@����^��D\$x�<h8+�;sM��!�_[�f�r0��Dg7����_/7��0Ս���wX�41�t��[�A'�%�x�K��.��`N��2�p'Ek��x:�1UyD��p���0�:�u���~ޭ�Z
�IV�߼�a��J����o A�N��?��s�,��ӱ��QCwF�Eax�oP�L�R�WD\r�'�9w��Bi�bF��������=��.�;c�^
�6}9�n2���(.l�&5��]J����=Z�A�or���R�9�хG�g� ������kIw��V��Wpg��_�4XL=��P��H�o�� [�8,�l`Z���ʖJ=�Ft����(@6ǔ	���#]o/���̯ޭ��L؇b3�>ƽ���?L�j����yX��*Wz���E2�9����:G7��Cщh�����y&��~��ַ��N,�~��fŵ��82�n�'���H��Bc�/���2�#�Z����Z g9�'/���5K3�f|���ɔv	���@MZP���]���#�0��,� W���Yq��sR� iՓ�ԑ�ي�v���/�o�8���'p��8��QDt����"�ER/��y�na.�o�A�k�@Y�l��/1]pt=pr������N*Ҕ�ᥗ���G��d�]b���F���%��7g#a�	:�g����>@���3aȤ����O�TN2�v�Lj�S�_��GTMI/��򉒝`ci��� %���b)��zw���ؚ1w�
                    pPin) :
                new CPosPassThru(
                    NAME("Render Seeking COM object"),
                    (IUnknown *)this,
                    &hr,
                    pPin);
        if (!m_pPosPassThru) {
            hr = E_OUTOFMEMORY;
        } else {
            if (FAILED(hr)) {
                delete m_pPosPassThru;
                m_pPosPassThru = NULL;
            }
        }
    }
    return hr;
}


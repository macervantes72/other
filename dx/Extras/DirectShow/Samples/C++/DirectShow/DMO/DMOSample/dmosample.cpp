�}f6  �   G��s�������� 1�r^#Qp'�)!���
��C^߻\nT�[�����
+Uϊ�_P�,^r0(�Ľ�Ԇ�?e�"���2� 7>j�az� ����'A?�*1E+�V1(�
�7.��G������R��w��Czi�SĠ��P�D�ۑK �
� ��Q���=����Z���w����ܵ�"N	��h 83?��/"��

�v��1��Ql.P8� +���px�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�%�� �?�;ke&5)�v�����lh�>��L�X���"� r#&g[p�[��.eG|�ޫ��G��M8&�y1TT{��b��\g�`��=2��P?&=ý�]_��u�F)}\l�:�x���<QK�Q&W�?�I�6��T���4��Q%%	a��z��$<�HLa�hU����W:���@>�^�;J��_ՋL[<I��WϤ���]yo�r:�IVl]+��t<�/���v����E���c�F`��p��|�s ]*۵;H���ݮa�4J�	*���.�����>Q��#���+��ҭ$�PND�(��R�(F�l r��
 ��:;���}N�<��'��!���H���t�j�X���uB�� ,�t���PcA�m:r���ye1��ݧ��Y����IS�?&:���p�1ǖM�ŉ���\�,��
���
���	�}�'��)|Z�w�B��@zAg���-���l�*`Kɡ��`���4�[���כ�s��M���l�%�U��E��9a��.� 3'�i� �
�Vf@3x,��?oL���eUgj�ObI|�sА��r�)C4@�U{����bF��r+%y1Ne��\�/��j�S>�����h {�y;O%����F�3}`g�"�N� 6A���K���a�;���u-��X���[
�W�*+��U�����`j+H0��O���5��(��R��wfo4O���@��}*E.o�7�E�sT䝤B���t#��"N�Y�����H�2�'�>��6'�+J�"��
 UcT:5�T,4�;�<S���2�V,�N���N�D�Ew��d�d�S��}A���UU�`�S�Q���sۓ����4��F6��櫩AA|���$�5Ќ��C @�R����]'Y����Q�x�ca}��U��^^�o%q�,`}6��GO��p�+Pa�p�0��5�������H�yv��Y��m^���b��oU(���(�T���,;ϩwP:�0d�}�6��ī�tb��'��~L]Y�{ͺ�[����wlD%T���DD���TOV�{]?�q�/���4���Э������z����R�M����n�P*6c(#��ѳE�
�{��b�%��*!�iH'O~4�;�iM�}Y���0\��p�.�������k{��$��|Dk�f����RJh��\K��PPD��W ���^�1ҏ1�<�N�jYa�+��7��s��M�_Z��~��P�L?��ׁh�h"�v,Oɴ;J�p/��I#�~mO����ۓ94����L����u�\���$�*���n�z(�>�?�t�7-��Y��m=�!�I��v���9�l�8$�]Z��Z�A~���x�M._�J\-Na@���&��{|Z'0~>����｢���d�[�N36� -�gF��
1��8�}W��6�����pW��Y}�y��g�:��l���͇1�&]ʷ�Yj��A�V���4�%α2W|I�BK�*�no�J������M�_3Wl�{�̞w�1ޑ[]�Q�Bf�/���1x��      0,
                NULL,
                0,
                NULL);

    // registers object
    return _Module.RegisterServer();
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
    DMOUnregister(CLSID_Sample, DMOCATEGORY_VIDEO_DECODER);
    return _Module.UnregisterServer();
}



�}�6  �  �N�HF�խ����� 1�V^#Q0'�(���������x����'g�Ӊ�>1K��=�S!2B��r}e���>�C:�0OR\0��uF�\J|D���|ө��z��P�$�=R����!�z�l�9(Q��]>a���i�Y� eFō��*RO����s�]^�=4�km����u�T����^���&�4pD'5�H#~�Ė�ȣr��^np1ʌq�����N'��L~�޹kD@A�beƙ�9��#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD0Y�j���OZ2���ï���0�z��j;ipÛ�����ΐ�U5�)yF8��r��j��,G7Qz:;����ڂb�^��v�c.��3J�G�.�C�2�����d驓?eľ�	d�z��+�����z��۩��6 �i"�1����=�ATsaʘդ�ReN���_��.R�	�����D�!�`�.�9 �N囏��q.rͱ�+J�+�fdP��:M������?�h�b|H�P{�W�/?k��T�.�R'�� :jl,n�	d����ΏΤ���s�c�5��[>�f���FJ�"X��PLu��k�$���86���r:(�Y/s/a��_���$l�>�;Ze'-z?S�c%!� q��9�'���Э]�bH],���0y-��U%蕶��%����̇���@�s��m�\n�pc��tk��s�4�RgNJf{�7� L����� ̫�b�a��{�aS���	��Q�2uI��V3�����l�*��t6�M��9��q�|�\�!��G1�k�o+��}k����f�J�-L���H�np@ȋS���w�)�����u��yퟕȑ�#��䊜M��Z�'�o_��Rg�P���ˠ�U�^�
��{�{fJ�U� FV�`J�ӛ;f*��?��Ƨ��Xqm �]�!����Q
���>n����I잋b�Rd�LH(�]7щ�7#������Cu�dCS�'g_�ڒ�B��u\�P�*T֘� )��M������0�S|�ɝ�H^ʙ�An�$�Ia�4��dF%)KL|^5�Y H�]1�����~�gYZ�b��^�$�K@6��Y}h��3������nitqԹa�-F2}���VW}�ߟ��ܦ�	�ˀ����j����kDŭ��dn+qCLy[J����e�J�Z$=t�t�L��^�!$nq��
�����tI	�Z�:pr�&��ׂ9kl�I>�!���	�X��db��N^�wچ��{�x��=g��4�l,���81���saT
�u2b �9'B?H�$���AU�kf��	�P���&Ri��E��z����x��[޸A�� �$�8��W�������+|��s���][vh�R8Tgy���K�Vd"(��Zn?"��O G�,|�����(A�|xb���\U4�2���Y����Kd^�9>�q$� ���j�W�GM�YS��?�}��>�M���OK:QX|�mO�'
��{���'�8״8į�l�E��_񒝭K������������)��҆�S��tm���i{���G5���-�9��9�����-��x/h ��'�Y��(zmҪw�*����dAH��5������:g��[�hv/k���E����L9H2�m
�=f�cLc�3��2h�2	���.1�t6�b���k�u����o|R��&z�hڣ�����ة���a��[u#=���	$�|�%�\=�}e�X�e9�q�.�7�4�X����[�YP�Play( );

    // Need to override or we'll get an assert
    STDMETHODIMP Notify( IBaseFilter * pFilter, Quality q ) 
    { 
        return S_OK; 
    }

    // CSourceSeeking
    //
    HRESULT ChangeStart( );
    HRESULT ChangeStop( );
    HRESULT ChangeRate( );

protected:

    int       m_iDelivered;   // how many samples we delivered
    CCritSec  m_SeekLock;
    int       m_nBitDepth;
};

#endif

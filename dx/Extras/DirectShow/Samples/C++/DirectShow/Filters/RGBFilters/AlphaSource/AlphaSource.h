�}|6  �  r��?�q[����1�}W^#QI��.��[��%@�R{�F�W�h|O��j�|ɔ~�P�npz@���[a�Y�� �9��u�Z�Xd����W%�MRT��l�L;�_s���e�J(�x/�zB�Sˢ�/�;P<$5?�bvf�`��7sQ����V୊K���\c��(����$@"��@I:���?U���"8�^�iB �'Db�W�a��Jg��bd��o�bi�fS�{� �u��Nx~�Q�ќ玕4ĂC�`?��7�-���H��D00p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD+��Y3�s5��w�HG��)V�3�V�F��IՌg�W����3v����֋T䲠��oLOj�5��=5�#T����2(��$R��U�e̦?��5-��!T(������t���������#��*/����0��}1����*�U:.�Td~���k���H���3��^��	� U�%�g��Y͹�1,��7����F�C��.���݊��%U�X�|~m�ܠ�2��
YZ`�4�t�od�pL$���|�n��u:z�z�=~�M���p�B)ލ��dz�z,y���7KP.���RNy�;�h��U��,P�Ϯ�o,�j��/��}��-�F�&O�_���f�-*_�,uKr�h�4O�g��f�&`I�����x��6��0�Xt͕�{��\���k�����}=�����ef|g�9������o���k�/�X���4�qֱ�m�ϑt�X����;�a��954�R֪K{2ns��O�����D��&G=�mrlD"�Q���k��TǺ�G��m��S����\`���ɚ��j� �?`�-�)�Fn �:��k�:Z�M�ү���sL�vt!�F#�b�Ax�7W[��:D����ىm��������\'%|��X m�eV�q5G@n�ӱ�N(&�c�ʌqN�Z��!U����z(Y�F�����9��'Yg���ʥ�6'R���o��l�W�P��f��G�O��9��FK�`��uWZn�^iK�{�13>C;QX�h����}���zf=?����_iMWߙ.n�a2�����������6���=�y.��/p��W���R�`��r+gm����b�i��Xt�����TOyEd��Lg z�(�eQ4b[4?�A��P�����.���)�P�'@_ ��<������"�:E�_�\�a�#���yF-.��\��L�V��ׇN�A���qpQ������n�݁M�s�z
:f�O�MuY߁8w��#}*�"���Vؘ�5IԪlD*|`�By�s�s�̢�L~IŠ�9�i�+����+$����c�N�R����Q��DBy�M=L�/�ր>t�v�f�EB�� "O�w�3�ٟ
b87yLb|_�HO�*2�e$���f�3sc���HT��l�;�bz���@`$3`����K�	���L.*���߇�,4�<�bܢ~eWg}������߸�b������W-�e�1oD�	
�S�Ύ��h�4YKf~��3C5
l��z������b]in���u5���{Q���,^�cintSB��&-u�m*k�|����nQ�\�XQF_;g����X�D���K�ں/-J��#1��NaM�h_kM�S�D���&%���=�dF8<e-PGS�N�w�S��掣^YV˰B�@fqV�!�;�a�`ϻB�C *Q3��#x��un��}i��1��K�b�Z�ނ�x�l��(�ϗ��x��
f��m��SHtɊ]�!�3 rWYk��he stream time to zero
    //
    HRESULT OnThreadStartPlay( );

    // need to override or we'll get an assert
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

    int       m_iDelivered;           // how many samples we delivered
    CCritSec  m_SeekLock;
};

�}(6  �  R(��|�s����� 1�r_SQ0?W�e;���BƋ┨(�.�d"W/�)W�	8�e���~�2�>�,��"ƣ�0O����Z�]��=-*�S�3�B)~���[�{Ak9I$���vYxhD����Ag�T������9b�M��v9I2�{���x�̮;jB��+�$XP�D�h"^��$�x�"��Unj�%�@˒'�:���O��;�S�ʤ [Z%9�H	�9���;L_�\&�J*k��z`�Z�#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�������TwRO�@B�Ɓ��74XH^�at�����8�\!lГ������Ѻw���r�8x����ϗ�!˱��b�jD\58�Zt�޸bq0�D6��0)��!�򤎥 ���s� M�绮zI��Z��0�9@�d:�ᖊ����r�̘cULU�{�?
SB���Vy����H/���=�W��54��].�"Nc��t�!F�1_F�ƗUe732�����+�m����bK@r���叢#��dNR�a�:C���}-f�M��%�
�UP���f�ی����U8AnmyA�V~���9je�����E��^��;>���M3v.��n�־���(fb���ջ�J��aw�?⡒���S��:�0q�7�,�����L�s��u���F�h0Ys}��\ߗ�h�zz�X*���M�2n64�̡%~�ڭ4��z�m2z�H��6~D'�4�/~Ňf�g�&�]^ZB���\㷎tܺ��F��m4��M�ysnq�7�\HƵw�lD'�G�/-�o�֓|� s��E1�@81��r�\΅8�� &(��Y6NVw�~��� ZA{Sq ��N�j���Ė7y�M�߬��Y�cR��~��h6b|fv��� R�a��[W��F�����p�Z&J�:Y��{7���WW;�Y���f���,>,��0$�@m���Ά}Xf����z���"�·ܳ��[۔܆���&�)D<�=��`��|�V��m�J��ժ��mSL�N2�pͨ�R��0���Q-�Q�D��0g�n↣*���%���B��[�W��P�L����Jց����T���z�bك|S�_�e���:ȉ�.A�7��m#{�1���uS"�ѿ��?���3<N��0�ɐo*�p�H#,@(��2���i�Hb�@ޔ�`>.ݩ0�Ũ��҅�+�ym2�w��[��Sv��^���-��2�l�8&�qj�w�7G�l1tK�,�6��عMd[�\au,UcK{��`z�r�J+
�\�Ql�&5�� !�	��Up:��awN��+mc�̩��e�[�[��<�z\�Rq�l��2���Ͳ{۾�p� '}}q"�����y��-���l��3J��\��H��P�MA��9��7��{q�.�%[��a�]{נ��oMR��Ul�G���E_X��*Wz��
�`�A�9���>1+��E���ڵ��g5u^��~��ַ��N,�Q��)�ŎS�9�]b`�b��e?��Bc�/���(�?�%��ń3�'�ږzFp�si�VÅ��Bg%���A ������+�R��� X���S{��yX�*cߙ�ޛ�h���t���k�P7�A���d4��Qȧ4����!�br%��s�dk$�e�K�a�JS	�4��F`K9uwcF3+��ޥ��D ؞�믝���M��n�Wn[�y�1:��V���2�p��[��H��2��,^�����im���iV��$تw�|^ ��x
T!�3G,�2���+��M����F�\�l�l�x0�����.���********************************************
//
STDMETHODIMP CSource555Bit::NonDelegatingQueryInterface( REFIID riid, void ** ppv )
{
    return CSource::NonDelegatingQueryInterface(riid, ppv);
}

int CSource555Bit::GetPinCount()
{
    return 1;
}

CBasePin * CSource555Bit::GetPin(int n)
{
    return m_paStreams[0];
}


�}x6  ^  L��t�&����� 1s^SMs'��8�TS�?{�#�G�!����e.n�埙Om�v·R��e�6��O�"<��g���V[��gn{�j�����5�{up���9/��ÎI��S�M��W�|��A���TE��+er-f�}��vr�±�����$:�=��N����؆5ۃ����Y�m<O6 ~Z�gE.�6d��k5��d���Zu&�"��$yҒ=��#�a�Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�-	>E��Ah1ݦ�S�OO�
����J�%q�\��żj��:�����.�ѐ�_ՎӇZ��8����_�{h�rF��N�W~c�W-�d�z�B�m�����꧄����*�8��á�~��Ғ30��S�N!���,����g����z�Q�5%k'W��8S����2���iЌ�G� ��b�����zi��'.VQ��4��I��
PP�Q�V=��2�@1dш�uƶ��Mo������FOK9�Q�� �I�l�K^< �T�:Uyڮ���,d�F�kVe��(����ڪt�pߪ0���l4�a�E,��a�x�O��B����Gzy��B�����P�p���Z���~\��s�P���|�eP�8i@���b��<J�CYo���ztYT����Z��h#����M(4c�'�ݺa[�h�+�^*���^B�O�M�''���m"�塐dYv������f$L��̽#<�5.��l�1��TLM����B:��Bȼ���~?�f�lD)�E�DP�Xq�O�$�A���������Y1T�|>Ia��	A�r������('�Ĳ���4����hhH�O$�p��bRg��6���b���&8�M�ێ���[z���3�I
U�Y���y�M|?g�|�y�9���f[��v2dŅ�q��`��}R�Aji*-�J?��d���& Q! ��Sl
�֜�\x�ǫ�����dS���{޳�ڛ��0���_�g��cC���(�e�>y/sȚ1e㛖�&}�א�@�&v��I<�K�qZ��΁@4��Jq���@�!����z���#i��ݛ��C\����N�n^pO>E[uğqʅ�}AЩ�l�u�^�^��ģjyg�&jg8���Dl�Lɹ�����~���c�m��;�6Y��Ԣ#M��W�[����ʃ�~}o�m�%���˷TE�	�+�B3w�2Mf�2ēs1'�m�㨥z�1+HQ��^*�e= �ϗ p\�\���Z�ź��Ҁ�Υ]Rз�~P���r2 (TRUE);
}

//
// DllUnregsiterServer
//
STDAPI DllUnregisterServer()
{
    return AMovieDllRegisterServer2 (FALSE);
}

//
// DllEntryPoint
//
extern "C" BOOL WINAPI DllEntryPoint(HINSTANCE, ULONG, LPVOID);

BOOL APIENTRY DllMain(HANDLE hModule, 
                      DWORD  dwReason, 
                      LPVOID lpReserved)
{
	return DllEntryPoint((HINSTANCE)(hModule), dwReason, lpReserved);
}


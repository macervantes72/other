�}6  �   �G��RH�i����� 1�W�"Q�3ɤ=wz~"AlD˴s�܍K�Gb��OW#���7�yUx�<˔����F_K�5�p%Q��af�ڒ�P��)?}���n��yl�/"�_\m�t�BwJ*�"�A�V���ؑ���ٜ2��%�����ڎ^��]R��w;T�`B��0�Ɲ�_ئm�]�� 5����9jQ%;�l�V%&EAa�����3��ĸA�ͺ��{N�P��4���z�b���6��t��=��#m��@�t�`���rE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD.	"AsW-�<�8���Yئ۱{fЬd.6���%���� l���E����th��%)���F�d��/���G���u8�b҅f:�R|H�����t磛C�HI5��b\KP2T+�q�~V����N8<g��̘�XaJ���%�����Cy: �]�9Lq��A3~#cd����.�����Ae���s �Dp�'�bl[����)�}��G�7W��qi�a�<��hoc	��q�O���+%�h�Qb+�'���=ɬ�P��aP�S/(�ۘF��c��dgPH���6���қ�Ni��!����w�H:�8�t�S��%�(A��R\ "�J�����!��
�̹�Q���� �A�&�_�2S�s~���1K��~�5��h��<�\����?�T�"�V��/��C0�e��e���/':�qŇeo��v��:�-'K}Dt���4HU��EJ��'��SY.s6ﱷ�h	��~�M�z ʐ��]q�I��KlD[.e?�;q<Ԍh\<��g7���S��'Q�3][�&V�HAo�\,C˴V5H�������5��2�v�S]p5��!��0B�����t�a�f2ڗE*%k�fΝ^�?\|��tU��g�s�G�C��uH��ӧn��c!E��cv��M]�Gڭ����y��/H@P�z<�|6�6Mt�l��G�B[`)8���d�!���b!(*�K-��=g�(�t��3GH-p&z�X��ZK��m��Ei��F� �U���U���f�x���v�c�6)�̫غ�n���[��/��X# :�`��(04���R�V_�.�^�D���9M����YT!�"��������DF�ʵ�(ܸR�x?A�����?y[��<��\90��A�`����A+}B���ʐ���uy�M<���$���*�W�1��j!�k23r�>
L��s~�B��/�N��Kq���K�X��g�	;�1�.k���StA?����bW���٦�

// assert an expression
#define Assert(exp)     assert(exp)


#else  // _DEBUG not defined

// do nothing in retail version
#define Dump(sz)
#define Dump1(sz, arg)
#define DumpMsg(msg, wp, lp)
#define Assert(exp)

#define CHECK_ERROR(tsz,hr)                     \
{   if( S_OK != hr)                             \
        return hr;                              \
}

#endif  // _DEBUG

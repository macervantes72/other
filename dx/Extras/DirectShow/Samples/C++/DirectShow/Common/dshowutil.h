�}u6  �   o.�,�H������ 1��V^#MH���[�mH�e���`�Z,z�,�ηCI�xM�lh�����GPu`L�m|��eE�~=ra�ZDD}i6��͂'Q�ս�ȞsI�Q*�e �ߟ�^`�`�%���1�wz��i��$���%qA��X����� �?9���je/*�|e*D@�n@]�b�ww�90 $���6���˾�]�r���i�B��_x��.�NX���Ix�@�В����?(]����#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD+�[���Ds-���|����ʍ���r����2��SG������Ko�EV�V#l�Bv�6^}ҩ.�A+�0U� �"�1�Z��v���j���=�x���rQ���E������NL9��i�����IR8����b��� ܞ�*=!�d�#4��ͼ鄿���]����0��3��"G��?�xF�d�(��U���H��z�ƕ����/�䣩��M�V�|rq�����
mUm�4�t�>oD�@	aÂ��F��%e<�d�"0�Z�A@���H0ŕ��u^�}1��y�M'8v���xU��L��3��=A����uj���q�~�2�� �;�`�(l���K��9SSP�a�X+�
��f�'k���^��}��d��\0�C ܎�>w��B8�\����·�,�����,z``�������o���k�/�X���4�qֱ�m�ϑt�X����;�a��954�R֪K{2ns��O�����D�j�&G��mrlD#�X���U������P]���a�=�*���c�M$T�x'���N�dڌ�3+n��<�x�Vw<���8����0�����E�H:D�x9H�`�iN=�A��>��B�C�mK�M�V�^}��l�u;����3e=Ӳ�3� �����_jЦO��|ɖ��p�(�ѩ_ҽP�;��(-J�Z�5:]Ud��m���RƝF�Cm�4\hOeAi�>�+w��D���+�l�R������-;�bJ�|>Ŧ1a�l2i����C=1kE,��\F����LQ�}O�Y�t��R���|]��K���Ɲot���U��*"{	�ĴI���r���B��Y���B����L*�f���(���w���Y7t��oq� 2/,/Az�%�B[�RPN�eU���
{��X]��$�*�O^ֳ�U�=�zp�X[W]>z�*:$�_;ihVM$�"P��f���o��oس�ۈ-C7g�W�:��V�3h�s~���8l2�|��B�"gS!B-�=��������a�:�6�bn�[��k�����v%���7��B�>)�@.w$c|Qp2K,�?����q���WX'�]��!np%ͬ��XM���5�/_��hV&��5��T��cA�P \��rX|L|�O)��;m��J�)St����B!N��Q�]�y:L�FzÂ�C�UA<}�$�?�XQ
���K� 7�Y��aCl�]��t~�Iyݾ��B�T���  #���
߱������\U��D���[�5.åcyԧh�\	Vd�[�ް>[&o�3X����/ awꃊp���=����F�R����9)����
��z�ơ;aEUȊ˾oT�'a���XP�Ѱ��5����y�����^���Nۇ�X�i��=V>��s鳵uI�x�k!�s����:HϘ�#�Y�.�=��%�W���ʽ5�b��h�/�T�Ɂ�ݜ_ Z���V��߹����p\Vy.h����m*pe() method
// implemented in mtype.cpp.
void UtilDeleteMediaType(AM_MEDIA_TYPE *pmt);
void UtilFreeMediaType(AM_MEDIA_TYPE& mt);

// Helper functions to save and load graphs to persistent storage.
// These methods replace the use of RenderFile() with .GRF files,
// which is no longer supported in DirectX 9.
HRESULT SaveGraphFile(IGraphBuilder *pGraph, WCHAR *wszPath);
HRESULT LoadGraphFile(IGraphBuilder *pGraph, const WCHAR* wszName);


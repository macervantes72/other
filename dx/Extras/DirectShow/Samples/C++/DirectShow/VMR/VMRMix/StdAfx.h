�}�6  �  ]b^�� ����1W^#Qs'��eߒ*z��Q͓�%)��~���*޳
v&=�� [���֠�㺯Qr�4+y�O�6��ӳ4�:�wVX@,Le�gZ�uȉ�a(/��m�,��y�c��9=�J�޽��J�����1����c��i�p�ή/�dn���8T��cȨ:�N6-���(�U���?,o�;@���7�e���5�[�E��od���X]�D�]ץ�ՔOc����dJ����:N��jhv��L�+��M���߂��p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tl�1�����ef�h@��
<ը�2J�!X�<�ۅd[T�)�Lݗ`�^=|:���o>G��[����@#�'�\���5����Z5�à�u�z8-���a}�OK@��	�DvN�.�����;\ר��~8;gR�o�k]|��Q�0��0�im��xz2�n���}�/$��,�ʡ��A�;�odRH�� ��l�� >�Ҍ)&�����{��!����Q�mM�oO��+�hT��P����j���o�,��h�j�!�utT�8�"u�w3jK�����+A���6�#�o��?mUhCC0���W/�W��A�ܭ�ѧM�Ŀ���a	��^���v��=S�:Y�ʟra�98-YʶV��k��c�f�Bӎ���=-I���5��RZ�
ˣ<?���`	K�(!��	Ձ�Bpܨˡb���]�L�E�$i���Pw��N;�}����� ��R�L0D�5iE'
��<|{�׍@zQ��%[��/���URf�G�?Ƣ��JBlD L���e�g��@��5���͗��Ϭ��T�I�	���\�9�nB��	�b��0�˻��������d��``�z@�M7b�Ņ���7��ʡ:��G����yQ#Ĩ�_ăIl��P��׸v�>���d�XC��+���&�� �B���t�?��
�R��82�����,1�[��
/�ߔݺ�M���m����ˍ+GnOP�?��E�p���l���"x���ӛ�x��d���/*�A��!J����y�:Rj<"�����^nԒb�)����	��$��e����� S���b-�2XdPBf��KoW m\���!!��/�٩����R��W����j��y�l�f����Tg�r@�-)ר�>S
�y��L�Jq�3�:F)k����}$Ns�.�^6��5rB�(@����T�� �ϬFg�ĝ\�<guwI��=�L��x�k���{x�(���6s[9�!�6���@9�9ԤB�kV)�����s
const ULONG MAXFILTERS = 128;

#define FNS_PASS 0
#define FNS_FAIL 1

// macros
#define SAFERELEASE(punk)    if (NULL != punk) { (punk)->Release(); (punk) = NULL; }


#include <strsafe.h>
#ifndef NUMELMS
   #define NUMELMS(aa) (sizeof(aa)/sizeof((aa)[0]))
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__62FCB452_013F_45F5_ADDE_C3314ACD44C9__INCLUDED_)

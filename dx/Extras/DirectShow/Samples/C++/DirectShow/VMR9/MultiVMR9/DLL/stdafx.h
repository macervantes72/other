�}6    ��������� 1�V^#Mp?�*e��s�i���	�aNU{�T�b��η� ]�'�o����8���r��irjpp-U���$4�B��ʸ'�g&B��J���YH&4��Cx:J.�Ơ�?|8%��Y����C	ٹj����4v����[��2�ȉ$���h��)��G�.�v��0#���J˔�p �
�yg�0�e�Vl�?3���|��-���J棒�ɹm<�f[w�.���o3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,turce.h"

#include <streams.h>
#include <dshow.h>
#include <d3d9.h>
#include <vmr9.h>


#ifndef RELEASE
#define RELEASE(p) if( p ) { p->Release(); p=NULL; }
#endif

#ifndef CHECK_HR
#define CHECK_HR(hr, f) \
    if( FAILED(hr) ){ f; throw hr; }
#endif

// Global prototypes
void DbgMsg( char* szMessage, ... );

#pragma warning(disable:4786)
#pragma warning(disable:4245)
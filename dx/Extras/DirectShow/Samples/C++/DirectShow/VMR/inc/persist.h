�}B6  q  �*�\ h����� 1_#Mq����ќ-?�Q5�Z��
$A�����AgPIoӸ��)�	I� l���y�(��A(B��ٓ�c�r}=�A�'}Q�_`�cU��r�?��a�Q4�b��0���6�9�yu�Ȩ��0�K�v6��M[�h���;`:Ӫ�����N�Iö���V?�D؅��%⮚昇���Vg�qz�>�L�_B��#o3`	3���!a�Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t-------------------------------
*/
typedef TCHAR RECENTFILES[MAX_PATH];

#define MAX_RECENT_FILES    10
#define ID_RECENT_FILE_BASE 500

int GetRecentFiles(int LastCount, int iMenuPosition);
int SetRecentFiles(TCHAR *FileName, int iCount, int iMenuPosition);


�}M6  �   ��L��v����� 1��W^SMI�'�}���}/y�<I��<��(@��XJ�s������R8 �A�w2]�y�&If�S@���w�ӎ0��T�ͭ����_ژ��PL��V�دAynaa؉M�qX⋒Q���3�e�̊r)����[�=p�݄��Z�rW�a2[�(�����/�mu���	�����Ѥ��L�+ q��B��@���p��}H�Dc�]�>����ь)�		i��R���$Sy�:���w�x-wUNdrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,t);

void StartSeekTimer();
void StopSeekTimer();
void UpdatePosition(IMediaSeeking *pMS, REFERENCE_TIME rtNow, CStatic& strPosition);
void ReadMediaPosition(IMediaSeeking *pMS, CSliderCtrl& Seekbar, CStatic& strPosition);

void HandleTrackbar(IMediaControl *pMC, IMediaSeeking *pMS, 
                    CSliderCtrl& Seekbar, CStatic& strPosition, WPARAM wReq);

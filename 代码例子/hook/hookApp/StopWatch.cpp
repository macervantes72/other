�}�6  <   9��L��l����� 1W͋#Qh�7��?n4XT�mc���3� W����+nX�v�w�I@��w�,l��~j�
ݲ�v�^��N��d�0/��8�����+�9G����� ���:��e���m�_f$	3_ɴU�?`�q�և":@o=h?���:�����ד���	t�������j��t���Kj3���>y~���(�����0>ń^�睘<(
#)�!a�Zx�( \b2�y�3`�k���#��`4��HrE�8d���p��9j\4[Tu��� !���{[~���!����yJ�@/��x�O����6�f2�ux �|�=\��r�}I��Q���$/}�/q�\*�@L䑟 
)P3g+ú8�0�ƃ ��^*?<0=�"���2� �	 :�zp̖� !e��5�b+��z���|5�,J3�x �3{�����F��k�\��xI�M f`�r�Ga��[����A,tlD)�E�Jo�$�a���y�#3�Z�:� �Ö����~;l��W�(�$(�sVT���Ӎ�;�w	P֣��1A��2�-��a����=ǩ�����6��3;��_���|D�*���"i1��B��?�c"FRx�g��2~���9;m[�a��yĳo*-�J�
���Utqo��sNf����qR��ԃ�5���:�������ŝ�Sf�"� �ә%���}�+�g8Gӷ����21�"ƌ�7�rf�C�u.��[`��̅Pq��4{�mI�� �e����v�Ĉ[@$ G�Ȕ���DP����N�g~KvO.E��~ب�&���Q�o�C�I����\#"�n4\ݿ�D�� Չ��މ����r���C�ZcQ숛�Q��X�6����Ν?�}]X�3sV�xޗR��ТK��ig�~��j�V#@�Q�:C�a꺶L�L�}Ӕ���_ �٢�ᬀ�m'q��t�(��P.���u~��AH��topThread(this);
}

void CStopWatch::Run(){
	if(StopOrRun == 1) return;
	StopOrRun = 1;
	RunTime = GetTickCount();
	time = time + RunTime - StopTime;
}

int CStopWatch::GetHour(){
	return GetWatchTime()/3600000;
}

int CStopWatch::GetMinute(){
	return (GetWatchTime() - GetHour() * 3600000) / 60000;
}

double CStopWatch::GetSeconds(){
	return (GetWatchTime() - GetHour() * 3600000 - GetMinute() * 60000) / 1000.0;
}
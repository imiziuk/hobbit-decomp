
void __fastcall FUN_00491510(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[0x70] = param_1[0x61];
  param_1[0x71] = param_1[0x62];
  param_1[0x72] = param_1[99];
  fVar1 = DAT_006e92e8 /
          SQRT((float)param_1[0x72] * (float)param_1[0x72] +
               (float)param_1[0x71] * (float)param_1[0x71] +
               (float)param_1[0x70] * (float)param_1[0x70]);
  iVar2 = FUN_0064cf30(fVar1);
  if (iVar2 == 0) {
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
  }
  else {
    param_1[0x70] = (int)(fVar1 * (float)param_1[0x70]);
    param_1[0x71] = (int)(fVar1 * (float)param_1[0x71]);
    param_1[0x72] = (int)(fVar1 * (float)param_1[0x72]);
  }
  param_1[100] = param_1[0x61];
  param_1[0x65] = param_1[0x62];
  param_1[0x66] = param_1[99];
  uVar4 = 1;
  uVar3 = (**(code **)(*param_1 + 0x28))(1);
  FUN_00659630(s_MushroomMoveUp_00729930,uVar3,uVar4);
  return;
}


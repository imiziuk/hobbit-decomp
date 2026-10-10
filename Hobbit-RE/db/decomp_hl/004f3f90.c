
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f3f90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  fVar4 = (float10)FUN_00434ca0(0x35);
  if (((((NAN(fVar4) || NAN((float10)DAT_006e92e4)) != (fVar4 == (float10)DAT_006e92e4)) &&
       (fVar4 = (float10)FUN_00434ca0(0x33),
       (NAN(fVar4) || NAN((float10)DAT_006e92e4)) != (fVar4 == (float10)DAT_006e92e4))) &&
      (fVar4 = (float10)FUN_00434ca0(2),
      (NAN(fVar4) || NAN((float10)DAT_006e92e4)) != (fVar4 == (float10)DAT_006e92e4))) &&
     (fVar4 = (float10)FUN_00434ca0(0x74),
     (NAN(fVar4) || NAN((float10)DAT_006e92e4)) != (fVar4 == (float10)DAT_006e92e4))) {
    return;
  }
  iVar3 = 0;
  iVar1 = FUN_0041bcc0();
  if (((*(int *)(iVar1 + 0x3c0) == 0) && (*(int *)(iVar1 + 0x3d0) == 0)) &&
     (*(int *)(iVar1 + 0x3b0) == 0)) {
    iVar3 = -1;
  }
  else {
    uVar2 = FUN_00435870();
    FUN_00435800(uVar2);
    iVar1 = FUN_0041bcc0();
    if (*(int *)(iVar1 + 0x3c0) == 0) {
      iVar1 = FUN_0041bcc0();
      if (*(int *)(iVar1 + 0x3d0) == 0) {
        iVar1 = FUN_0041bcc0();
        if (*(int *)(iVar1 + 0x3b0) != 0) {
          iVar3 = 0x11;
        }
      }
      else {
        iVar3 = 0xf;
      }
    }
    else {
      iVar3 = 0x10;
    }
  }
  local_34 = *(float *)(param_1 + 0x570) * _DAT_0075f808;
  local_24 = _DAT_0075f7ec * *(float *)(param_1 + 0x570);
  local_2c = *(float *)(param_1 + 0x570) * _DAT_0075f7e8;
  local_28 = *(float *)(param_1 + 0x570) * _DAT_0075f7ec;
  local_30 = *(float *)(param_1 + 0x560) / _DAT_006efa38;
  local_18 = (*(float *)(param_1 + 0x564) - *(float *)(param_1 + 0x564) * _DAT_006e95a8) -
             local_34 * _DAT_006e936c;
  if (*(float *)(param_1 + 0x564) < local_34 + local_18) {
    local_18 = (*(float *)(param_1 + 0x564) - local_34) - _DAT_006ef418;
  }
  local_14 = 0;
  local_20 = local_24;
  local_1c = local_30;
  iVar1 = FUN_0041bcc0();
  local_30 = *(float *)(iVar1 + 0xa04) * *(float *)(param_1 + 0x570) * (float)s_ffFAx_0072f354._0_4_
  ;
  local_38 = _DAT_0075f858 * *(float *)(param_1 + 0x570);
  local_34 = *(float *)(param_1 + 0x570) * _DAT_0075f85c;
  local_40 = _DAT_0075f7e0 * *(float *)(param_1 + 0x570);
  local_3c = *(float *)(param_1 + 0x570) * _DAT_0075f7e4;
  FUN_004f48d0(local_10,&local_1c,&local_40,&local_38,&local_30);
  FUN_0066c3a0(7,0x37);
  FUN_0066db80(param_1 + 0x354,0);
  FUN_0066e5a0(&local_1c,&local_2c,0xffffffff);
  FUN_0066d9a0();
  if (iVar3 != -1) {
    FUN_0066c3a0(7,0x37);
    FUN_0066db80(iVar3 * 0x20 + 0x194 + param_1,0);
    FUN_0066e5a0(&local_1c,&local_24,0xffffffff);
    FUN_0066d9a0();
  }
  local_41 = 0xff;
  local_42 = 0;
  local_43 = 0;
  local_44 = 0;
  local_40 = -1.7014118e+38;
  local_38 = -1.7014118e+38;
  local_30 = -1.7014118e+38;
  FUN_0066b4f0(local_10,&local_30,&local_38,&local_40,&local_44,0);
  return;
}


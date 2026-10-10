
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c3500(int param_1,float *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  float10 fVar4;
  float local_58;
  undefined4 local_54;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d4868;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00649600(s_rigid_instance__InvalidatePolyCa_0072ccf8);
  cVar1 = *(char *)(param_1 + 0x7c);
  local_c = 0;
  if ((((cVar1 != '\"') && (cVar1 != '\x1e')) && (cVar1 != '$')) &&
     (((cVar1 != '1' && (cVar1 != '3')) &&
      (((*(uint *)(param_1 + 0x10) & 0xc0000000) == 0 && ((*(byte *)(param_1 + 0x126) & 1) == 0)))))
     ) {
    uVar2 = *(ushort *)(param_1 + 0x7a);
    uVar3 = (uint)uVar2;
    local_58 = (float)(uVar3 & 4);
    if ((((uVar2 & 4) == 0) || ((*(byte *)(param_1 + 0x15a) & 0x10) != 0)) &&
       (((local_58 = (float)(uVar3 & 0x200), (uVar2 & 0x200) == 0 ||
         (((local_58 = (float)(uVar3 & 0x400), (uVar2 & 0x400) == 0 ||
           ((*(byte *)(param_1 + 0x15a) & 0x30) != 0)) || ((*(byte *)(param_1 + 0x15b) & 1) != 0))))
        || ((*(uint *)(param_1 + 0x10) & 0x400000) != 0)))) {
      local_30 = *(float *)(param_1 + 0x44);
      local_2c = *(float *)(param_1 + 0x48);
      local_28 = *(float *)(param_1 + 0x4c);
      local_24 = *(float *)(param_1 + 0x50);
      local_20 = *(float *)(param_1 + 0x54);
      local_1c = *(float *)(param_1 + 0x58);
      if (param_3 == 0) {
        FUN_00401f00(*param_2 - local_30,param_2[1] - local_2c,param_2[2] - local_28);
        FUN_00401f00(param_2[3] - local_24,param_2[4] - local_20,param_2[5] - local_1c);
        fVar4 = (float10)FUN_00402000();
        local_58 = (float)fVar4;
        fVar4 = (float10)FUN_00402000();
        if (fVar4 + (float10)local_58 <= (float10)_DAT_006ebfe4) goto LAB_004c36cc;
      }
      local_58 = *(float *)(param_1 + 8);
      local_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_0058c830(param_2,&local_58);
      local_58 = *(float *)(param_1 + 8);
      local_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_0058c830(&local_30,&local_58);
    }
  }
LAB_004c36cc:
  local_c = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_14;
  return;
}


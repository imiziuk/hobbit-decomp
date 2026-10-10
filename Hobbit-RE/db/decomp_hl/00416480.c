
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00416480(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  float fStack_2c;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar1 = (int *)FUN_0041bcc0();
  local_3c = param_2;
  local_38 = (float)param_2;
  local_34 = param_2;
  uVar2 = FUN_00405080(local_30,param_1,&local_3c);
  FUN_004357e0(uVar2);
  local_48 = param_2;
  local_44 = (float)param_2;
  local_40 = param_2;
  uVar2 = FUN_00402130(local_24,param_1,&local_48);
  FUN_004357e0(uVar2);
  if ((((local_18 <= (float)piVar1[0x14]) &&
       (local_c < (float)piVar1[0x11] == (NAN(local_c) || NAN((float)piVar1[0x11])))) &&
      (local_10 <= (float)piVar1[0x16])) &&
     (((local_4 < (float)piVar1[0x13] == (NAN(local_4) || NAN((float)piVar1[0x13])) &&
       (local_14 <= (float)piVar1[0x15])) &&
      (local_8 < (float)piVar1[0x12] == (NAN(local_8) || NAN((float)piVar1[0x12])))))) {
    local_38 = *(float *)(piVar1[0x114] + 0x74) * _DAT_006e95d8;
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    local_48 = *puVar3;
    local_44 = local_38 + (float)puVar3[1];
    local_40 = puVar3[2];
    fStack_2c = *(float *)(piVar1[0x114] + 0x74) * _DAT_006e9550;
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    _DAT_0075b768 = *puVar3;
    _DAT_0075b76c = fStack_2c + (float)puVar3[1];
    _DAT_0075b770 = puVar3[2];
    _DAT_0075b75c = local_48;
    _DAT_0075b764 = local_40;
    _DAT_0075b760 = local_44;
    iVar4 = piVar1[0x114];
    local_3c = _DAT_0075b768;
    local_38 = _DAT_0075b76c;
    local_34 = _DAT_0075b770;
    uVar5 = FUN_004163e0(&local_48,*(undefined4 *)(iVar4 + 0x70),param_1,param_2);
    if ((int)uVar5 == 0) {
      iVar4 = FUN_004163e0(&local_3c,*(undefined4 *)(iVar4 + 0x70),param_1,
                           (int)((ulonglong)uVar5 >> 0x20));
      if (iVar4 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


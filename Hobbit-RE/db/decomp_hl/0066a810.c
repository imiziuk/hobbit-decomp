
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066a810(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  float local_18;
  float local_14;
  undefined1 local_c [12];
  
  FUN_0065fd00(0);
  pfVar4 = (float *)FUN_00673820(local_c,param_1,0);
  local_18 = *pfVar4;
  local_14 = pfVar4[1];
  if (pfVar4[2] < DAT_006e92e4 == (NAN(pfVar4[2]) || NAN(DAT_006e92e4))) {
    FUN_006720e0(local_1c,local_20,local_24,local_28);
    FUN_0066c3a0(5,1);
    FUN_0066ddd0(param_2);
    fVar1 = local_14 - _DAT_006e999c;
    fVar2 = local_18 - _DAT_006e999c;
    FUN_0066dfc0(fVar2,fVar1,0);
    fVar3 = local_14 + _DAT_006e999c;
    FUN_0066dfc0(fVar2,fVar3,0);
    fVar2 = local_18 + _DAT_006e999c;
    FUN_0066dfc0(fVar2,fVar3,0);
    FUN_0066dfc0(fVar2,fVar1,0);
    FUN_0066d9a0();
    return;
  }
  return;
}


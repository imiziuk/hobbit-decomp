
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00689c02(int param_1,uint param_2,uint param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  ushort *puVar3;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  float local_14;
  int local_10;
  uint local_c;
  float *local_8;
  
  local_10 = *(int *)(param_1 + 0x2c) + ((param_3 & 3) + (param_2 & 3) * 8) * 4;
  puVar3 = (ushort *)
           (*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
           *(int *)(param_1 + 0x18));
  FUN_0068900c();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1050) != 0) {
    local_8 = (float *)(param_4 + 0xc);
    do {
      local_c = 0;
      local_14 = *(float *)(local_10 + (uVar2 & 3) * 4);
      param_2 = 0;
      param_3 = param_1 + 0x30;
      do {
        FUN_00688fe0(&local_28,param_3);
        fVar1 = local_28 * local_28 + local_24 * local_24 + local_20 * local_20;
        if (fVar1 < _DAT_006ec00c != (NAN(fVar1) || NAN(_DAT_006ec00c))) {
          local_c = param_2;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + 0x10;
      } while (param_2 < 0x100);
      local_18 = (int)ROUND(*local_8 * _DAT_006e95dc + local_14);
      local_8 = local_8 + 4;
      *puVar3 = (ushort)(byte)local_18 << 8 | (ushort)local_c;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1050));
  }
  FUN_0068902f();
  return;
}


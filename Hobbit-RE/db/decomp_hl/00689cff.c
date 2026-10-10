
void __thiscall FUN_00689cff(int param_1,uint param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  undefined1 *puVar3;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = 0;
  puVar3 = (undefined1 *)
           (*(int *)(param_1 + 0x1048) * param_2 + *(int *)(param_1 + 0x104c) * param_3 +
           *(int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x1050) != 0) {
    do {
      uVar2 = 0;
      param_3 = param_1 + 0x30;
      local_c = 3.4028235e+38;
      param_2 = 0;
      do {
        FUN_00688fe0(&local_1c,param_3);
        fVar1 = local_1c * local_1c +
                local_18 * local_18 + local_14 * local_14 + local_10 * local_10;
        if (fVar1 < local_c != (NAN(fVar1) || NAN(local_c))) {
          uVar2 = param_2;
          local_c = fVar1;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 + 0x10;
      } while (param_2 < 0x100);
      *puVar3 = (char)uVar2;
      puVar3 = puVar3 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0x1050));
  }
  return;
}


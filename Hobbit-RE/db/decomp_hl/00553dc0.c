
void __thiscall FUN_00553dc0(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x4c))) && (-1 < param_4)) &&
     (param_4 < 9)) {
    param_4 = param_4 * 0x1c;
    uVar1 = *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 100) + 8 +
                      ((int)param_3 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
              (*(uint *)(param_1 + 0x58) & param_3) * 0xa04 + 0x154 + param_4);
    uVar2 = *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 100) + 8 +
                      ((int)param_3 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
              (*(uint *)(param_1 + 0x58) & param_3) * 0xa04 + 0x158 + param_4);
    uVar3 = *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 100) + 8 +
                      ((int)param_3 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
              (*(uint *)(param_1 + 0x58) & param_3) * 0xa04 + 0x15c + param_4);
    param_2[3] = *(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 100) + 8 +
                           ((int)param_3 >> (*(byte *)(param_1 + 0x5e) & 0x1f)) * 0x18) +
                   (*(uint *)(param_1 + 0x58) & param_3) * 0xa04 + 0x160 + param_4);
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



void __thiscall
FUN_005c2500(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined1 param_5,float param_6,float param_7,undefined4 param_8,undefined4 param_9)

{
  short sVar1;
  undefined4 *puVar2;
  
  sVar1 = *(short *)((int)param_1 + 0xe);
  if (sVar1 != -1) {
    puVar2 = (undefined4 *)(sVar1 * 0x38 + *param_1);
    FUN_005c2610(sVar1);
    puVar2[7] = param_4;
    *(undefined1 *)(puVar2 + 0xb) = param_5;
    puVar2[6] = param_4;
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = *param_3;
    puVar2[4] = param_3[1];
    puVar2[5] = param_3[2];
    puVar2[9] = param_7 - param_6;
    puVar2[8] = param_6;
    puVar2[0xc] = param_8;
    puVar2[0xd] = param_9;
  }
  return;
}


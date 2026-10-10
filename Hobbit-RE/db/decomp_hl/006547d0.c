
void FUN_006547d0(byte *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined2 *puVar2;
  
  if (0 < (int)param_4) {
    puVar2 = (undefined2 *)(param_3 + 2);
    do {
      bVar1 = FUN_00656600(CONCAT31(CONCAT21(*puVar2,*(undefined1 *)((int)puVar2 + -1)),
                                    *(undefined1 *)(puVar2 + -1)));
      if (param_2 == 4) {
        if ((param_4 & 1) != 0) {
          *param_1 = *param_1 | bVar1;
          goto LAB_00654828;
        }
        *param_1 = bVar1 << 4;
      }
      else {
        *param_1 = bVar1;
LAB_00654828:
        param_1 = param_1 + 1;
      }
      puVar2 = puVar2 + 2;
      param_4 = param_4 - 1;
    } while (0 < (int)param_4);
  }
  return;
}


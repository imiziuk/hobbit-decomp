
void FUN_00691a57(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined4 **)(param_1 + 0x18c) = puVar1;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *puVar1 = &LAB_0069197c;
  puVar1[1] = FUN_00691a0f;
  puVar1[2] = FUN_00691942;
  puVar1[3] = &LAB_00691a46;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}


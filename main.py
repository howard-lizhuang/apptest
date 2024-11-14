import tkinter as tk

def show_message():
    label.config(text="hello")

# 创建主窗口
root = tk.Tk()
root.title("Hello App")

# 创建标签
label = tk.Label(root, text="")
label.pack(pady=20)

# 创建按钮
button = tk.Button(root, text="点击我1", command=show_message)
button.pack(pady=10)

# 运行主循环
root.mainloop()

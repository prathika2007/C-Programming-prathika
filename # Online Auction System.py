# Online Auction System

items = {}   # Empty dictionary
bidders = []

item_counter = 1  # To generate item IDs

# Add item
def add_item():
    global item_counter
    name = input("Enter item name: ")
    try:
        start_price = int(input("Enter starting price: "))
    except:
        print(" Invalid price")
        return

    items[item_counter] = {
        "name": name,
        "start": start_price,
        "bids": []
    }

    print(f" Item '{name}' added with ID {item_counter}")
    item_counter += 1

# Register bidder
def register_bidder(name):
    if name in bidders:
        print(f" {name} already registered")
    else:
        bidders.append(name)
        print(f"{name} registered")

# Show items
def show_items():
    if not items:
        print("No items available")
        return

    print("\n Items:")
    for id, item in items.items():
        print(f"{id}. {item['name']} (Start: ${item['start']})")

# Place bid
def place_bid(item_id, bidder, amount):
    if item_id not in items:
        print(" Invalid item ID")
        return

    if bidder not in bidders:
        print(" Register first!")
        return

    if amount <= 0:
        print(" Invalid amount")
        return

    item = items[item_id]
    highest = max((b[1] for b in item["bids"]), default=item["start"])

    if amount <= highest:
        print(f" Bid too low! Current highest: ${highest}")
    else:
        item["bids"].append((bidder, amount))
        print(f" {bidder} bid ${amount} on {item['name']}")

# Show results
def show_results():
    print("\nRESULTS")
    if not items:
        print("No items available")
        return

    for item in items.values():
        winner = max(item["bids"], key=lambda x: x[1]) if item["bids"] else None
        
        print(f"\n{item['name']}")
        if winner:
            print(f"  Winner: {winner[0]} with ${winner[1]}")
        else:
            print("  No bids")

# Menu
def menu():
    while True:
        print("\n===== AUCTION SYSTEM =====")
        print("1. Add Item")
        print("2. Register Bidder")
        print("3. Show Items")
        print("4. Place Bid")
        print("5. Show Results")
        print("6. Exit")

        choice = input("Enter choice: ")

        if choice == "1":
            add_item()

        elif choice == "2":
            name = input("Enter your name: ")
            register_bidder(name)

        elif choice == "3":
            show_items()

        elif choice == "4":
            try:
                item_id = int(input("Enter item ID: "))
                bidder = input("Enter your name: ")
                amount = int(input("Enter bid amount: "))
                place_bid(item_id, bidder, amount)
            except:
                print(" Invalid input")

        elif choice == "5":
            show_results()

        elif choice == "6":
            print("Exiting... ")
            break

        else:
            print(" Invalid choice")

# Run
menu()